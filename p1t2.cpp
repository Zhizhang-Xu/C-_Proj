#include <iostream>
using namespace std;
template<class numtype>     //定义类模板
class Compare
{
public:
	Compare(numtype a, numtype b)
	{
		x = a; y = b;
	}
	//在类内先进行声明
	numtype max();
	numtype min();
private:
	numtype x, y;
};

template<class numtype>//分别对max函数与min函数进行定义
numtype Compare<numtype>::max()
{

	return(x > y) ? x : y;
}
template<class numtype>
numtype Compare<numtype>::min()
{
	return(x < y) ? x : y;
}

int main()
{
	Compare<int> cmp1(3, 7);          //定义对象cmp1,用于两个整数的比较
	cout << cmp1.max() << " is the Maximum of two integer numbers. " << endl;
	cout << cmp1.min() << " is the Minimum of two integer numbers." << endl;
	Compare<float> cmp2(45.78, 93.6);   //定义对象cmp2,用于两个浮点数的比较
	cout << cmp2.max() << " is the Maximum of two float numbers." << endl;
	cout << cmp2.min() << " is the Minimum of two float numbers. " << endl;
	Compare<char> cmp3('a', 'A');         //定义对象cmp3,用于两个字符的比较
	cout << cmp3.max() << " is the Maximum of two characters. " << endl;
	cout << cmp3.min() << " is the Minimum of two characters. " << endl;
	return 0;
}
