#include <iostream>

using namespace std;

class Point
{
private :
	int xpos, ypos;
public :
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << "[" << xpos << ", " << ypos << "]" <<  endl;
	}
	// operator++(int) �̸� ���� ����.
	// operator++() �̸� ���� ����.
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return *this;
	}

	friend Point& operator--(Point& ref);
};

Point& operator--(Point& ref)
{
	ref.xpos--;
	ref.ypos--;
	return ref;
}

//int main(void)
//{
//	Point pos(1, 2);
//	++pos;
//	pos.ShowPosition();
//	--pos;
//	pos.ShowPosition();
//
//	++(++pos);
//	pos.ShowPosition();
//	--(--pos);
//	pos.ShowPosition();
//
//	return 0;
//}