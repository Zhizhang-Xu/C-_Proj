#include <iostream>
#include "student.h"                //��Ҫ©д����,�������ͨ����
using namespace std;
void Student::display()              //�����ⶨ�� display�ຯ��
{
	cout << "num: " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}
void Student::input()
{
	cin >> num >> name >> sex;
}