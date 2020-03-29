#ifndef __POINT_H_
#define __POINT_H_

class Point {
private :
	int x; // 값 제한 : 0 ~ 100
	int y;// 값 제한 : 0 ~ 100

public :
	bool InitMembers(int xpos, int ypos);
	int GetX() const; // const 선언으로 이 함수는 멤버변수를 수정할 수 없다.
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif