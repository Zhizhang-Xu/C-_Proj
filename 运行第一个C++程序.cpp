#include <iostream>
using namespace std;
class Time                                     //����Time��
{
private:                                       //���ݳ�ԱΪ˽�е�
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> hour >> minute >> sec;
	};
	void output()
	{
		cout <<hour << ":" <<minute << ":" <<sec << endl;//���ʱ��
	}
	
};