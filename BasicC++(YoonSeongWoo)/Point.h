#ifndef __POINT_H_
#define __POINT_H_

class Point {
private :
	int x; // �� ���� : 0 ~ 100
	int y;// �� ���� : 0 ~ 100

public :
	bool InitMembers(int xpos, int ypos);
	int GetX() const; // const �������� �� �Լ��� ��������� ������ �� ����.
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif