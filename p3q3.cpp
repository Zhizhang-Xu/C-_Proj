#include <iostream>
using namespace std;
class Matrix
{
private:
	float myMatrix[2][3]={0};
public:
	Matrix(int n)//����ʹ�ô������Ĺ��캯���������롰+���������������á�+�����صõ�һ��myMatrixΪ�յĶ��󣬶����������еõ����ڲ����ݵĶ���
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
		Matrix M3;//����õ���һ��myMatrixΪ�յĶ�����Ϊ�������myMatrix������г�ʼ��
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
	Matrix M1(0), M2(0);//������ζ�Ŷ��󽫱�cin����ֵ
	Matrix M3;//������ΪM3���踳��ֵ��ʹ����Ĭ�Ϲ��캯��
	M3 = M1 + M2;
	cout<< M3;
}