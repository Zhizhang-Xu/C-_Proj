#include <iostream>
using namespace std;
class Matrix
{
private:
	float myMatrix[2][3]={0};
public:
	Matrix(int n)//这里使用带参数的构造函数，是想与“+”重载区别开来，让“+”重载得到一个myMatrix为空的对象，而在主函数中得到有内部数据的对象
	{
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 3; j++)
				cin >> myMatrix[i][j];
	}
	Matrix()
	{

	}
	Matrix operator+(Matrix& M2)
	{
		Matrix M3;//这里得到了一个myMatrix为空的对象，因为我无需对myMatrix数组进行初始化
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 3; j++)
				M3.myMatrix[i][j] = this->myMatrix[i][j] + M2.myMatrix[i][j];
		return M3;
	}
	friend ostream & operator<<(ostream &out,Matrix M)
	{
		out << endl;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 3; j++)
				out << M.myMatrix[i][j] << " ";
			out << endl;
		}
		return cout;
	}
};

int main()
{
	Matrix M1(0), M2(0);//这里意味着对象将被cin赋初值
	Matrix M3;//这里因为M3无需赋初值，使用了默认构造函数
	M3 = M1 + M2;
	cout<< M3;
}