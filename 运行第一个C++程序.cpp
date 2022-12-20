#include <iostream>
using namespace std;
class Time                                     //定义Time类
{
private:                                       //数据成员为私有的
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
		cout <<hour << ":" <<minute << ":" <<sec << endl;//输出时间
	}
	
};