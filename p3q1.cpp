#include<iostream>
using namespace std;
class Complex
{
private:
	float real, imag;
public:
	Complex(float a, float b)//带参数的构造函数
	{
		real=a;
		imag = b;
	}
	Complex operator+(const Complex& C2)//重载运算符“+”
	{
		Complex C3(0,0);
		C3.imag = this->imag + C2.imag;
		C3.real = this->real + C2.real;
		return C3;
	}
	Complex operator-(const Complex& C2)//重载运算符“-”
	{
		Complex C3(0,0);
		C3.imag = this->imag - C2.imag;
		C3.real = this->real - C2.real;
		return C3;
	}
	Complex operator*(const Complex& C2)//重载运算符“*”
	{
		Complex C3(0, 0);
		C3.imag = this->imag * C2.imag;
		C3.real = this->real * C2.real;
		ijijiji
		return C3;
	}
	Complex operator/(const Complex& C2)//重载运算符“/”
	{
		if (C2.imag == 0 || C2.real == 0)
			cout << "error";
		else
		{
			Complex C3(0, 0);
			C3.imag = this->imag / C2.imag;
			C3.real = this->real / C2.real;
			return C3;
		}
	}
	friend ostream & operator<<(ostream &out,Complex C)//重载输出流
	{
		out<< C.real<<"+"<< C.imag << "i";
		return out;
	}
};
int main()
{
	Complex C1(8,4), C2(-5,2),C3(0,0);
	cout << "C1=" << C1 << "\tC2=" << C2 << endl;
	C3 = C1 + C2;
	cout << "C1+C2="<<C3<<endl;
	C3 = C1 - C2;
	cout << "C1-C2=" << C3 << endl;
	C3 = C1 * C2;
	cout << "C1*C2=" << C3 << endl;
	C3 = C1 / C2;
	cout << "C1/C2=" << C3 << endl;
	return 0;
}