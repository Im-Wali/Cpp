#include <iostream>

using namespace std;

class Point
{
private :
	int xpos, ypos;
public :
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{}
	
	void ShowPosition() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
	// 연산자 오버로딩
	Point operator+(const Point & ref)
	{
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}
};

//int main(void)
//{
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	//Point pos3 = pos1.operator+(pos2);
//	Point pos3 = pos1 + pos2; // 컴파일러가 pos1.operator+(pos2); 형식으로 변환
//
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	pos3.ShowPosition();
//
//	return 0;
//}