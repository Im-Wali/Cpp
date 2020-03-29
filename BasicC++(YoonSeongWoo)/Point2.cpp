#include <iostream>
#include "Point2.h"

using namespace std;

Point2::Point2(const int& xpos, const int& ypos) {
	x = xpos;
	y = ypos;
}

int Point2::GetX() const { return x; }
int Point2::GetY() const { return y; }

bool Point2::SetX(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	x = xpos;
	return true;
}

bool Point2::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;
		return false;
	}

	y = ypos;
	return true;
}


