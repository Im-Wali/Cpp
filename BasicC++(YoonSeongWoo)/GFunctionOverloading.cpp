#include<iostream>

using namespace std;

class Point
{
private :
	int xpos, ypos;
public :
	Point(int x = 0, int y = 0) :xpos(x), ypos(y)
	{}

	void ShowPosition() {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}

	friend void operator+=(Point &p1, const Point &p2);
	friend void operator-=(Point &p1, const Point &p2);
	friend bool operator==(Point &p1, const Point &p2);
	friend bool operator!=(Point &p1, const Point &p2);
};

void operator+=(Point &p1, const Point &p2)
{
	p1.xpos += p2.xpos;
	p1.ypos += p2.ypos;
}
void operator-=(Point &p1, const Point &p2)
{
	p1.xpos -= p2.xpos;
	p1.ypos -= p2.ypos;
}
bool operator==(Point &p1, const Point &p2)
{
	bool b = false;


	if (p1.xpos == p2.xpos && p1.ypos == p2.ypos)
		b = true;

	return b;
}
bool operator!=(Point &p1, const Point &p2)
{
	bool b = false;


	if (p1.xpos != p2.xpos || p1.ypos != p2.ypos)
		b = true;

	return b;
}
//
//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	//Point pos3 = pos1.operator+(pos2);
//
//	pos1 += pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//
//	pos1 -= pos2;
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//
//	cout << "pos1 == pos2 = " << (pos1 == pos2) << endl;
//	cout << "pos1 != pos2 = " << (pos1 != pos2) << endl;
//
//	return 0;
//}