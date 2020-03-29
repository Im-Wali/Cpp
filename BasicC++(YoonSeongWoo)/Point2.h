#ifndef __POINT2_H_
#define __POINT2_H_

class Point2 {
private :
	int x;
	int y;
public :
	Point2(const int& xpos, const int& ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif
