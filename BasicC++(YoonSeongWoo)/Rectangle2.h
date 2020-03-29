#ifndef __RECTANGLE2_H_
#define __RECTANGLE2_H_

#include "Point2.h"

class Rectangle2 {
private :
	Point2 upLeft;
	Point2 lowRight;
public :
	Rectangle2(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecInfo2() const;
};

#endif