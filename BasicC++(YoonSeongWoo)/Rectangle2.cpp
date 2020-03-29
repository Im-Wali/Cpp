#include <iostream>
#include "Rectangle2.h"

using namespace std;

Rectangle2::Rectangle2(const int& x1, const int& y1, const int& x2, const int& y2) 
	:upLeft(x1,y1), lowRight(x2, y2) // 멤버변수의 생성자 호출.
{
	// empty
}

void Rectangle2::ShowRecInfo2() const {
	cout << "좌 상단 : [" << upLeft.GetX() << ", " << upLeft.GetY() << "]" << endl;
	cout << "우 하단 : [" << lowRight.GetX() << ", " << lowRight.GetY() << "]" << endl;

}
//
//int main(void) {
//	Rectangle2 rec(1, 1, 5, 5);
//	rec.ShowRecInfo2();
//	return 0;
//}