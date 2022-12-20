#include<iostream>
using namespace std;
class Complex
{
private:
	float real;
	float imag;
public:
	Complex(float a,float b)
	{
		real = a;
		imag = b;
	}
	Complex(float a)//为强制转化类型额外定义的构造函数
	{
		real = a;
		imag = 0;
	}
	Complex operator+(const Complex& C2)//对“+”重载
	{
		Complex C3(0,0);
		C3.imag = this->imag + C2.imag;
		C3.real = this->real + C2.real;
		return C3;
	}
	Complex operator()()//对强制类型转换运算符进行重载，使得整数类型能够转化为复数类型
	{
		return real;
	}
	friend ostream & operator<<(ostream& out, Complex C)//重载输出流
	{
		out << C.real << "+" << C.imag << "i";
		return out;
	}
};
int main()
{
	Complex C1(5,2), C2(8,4),C3(0,0), C4(0,0);
	float N = 4;
	cout << "C1=" << C1 << "\tC2=" << C2 << " N=" << N << endl;
	C3 = C1 + C2;
	cout << "C1+C2=" << C3<<endl;
	C4 = C2 +Complex(N);
	cout << "C2+N=" << C4;
}