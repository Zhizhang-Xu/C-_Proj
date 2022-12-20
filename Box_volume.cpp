#include<iostream>
using namespace std;
class Box
{
private:
	float length;
	float width;
	float height;
public:
	void volume()
	{
		cout << length * width * height;
	}
	Box()
	{
		cin >> length >> width >> height;
	}
};

