#include <iostream>
#include "Rectangle2.h"

using namespace std;

Rectangle2::Rectangle2(const int& x1, const int& y1, const int& x2, const int& y2) 
	:upLeft(x1,y1), lowRight(x2, y2) // ��������� ������ ȣ��.
{
	// empty
}

void Rectangle2::ShowRecInfo2() const {
	cout << "�� ��� : [" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
	cout << "�� �ϴ� : [" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl;

}
//
//int main(void) {
//	Rectangle2 rec(1, 1, 5, 5);
//	rec.ShowRecInfo2();
//	return 0;
//}