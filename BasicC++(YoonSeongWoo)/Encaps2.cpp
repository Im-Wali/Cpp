#include <iostream>

using namespace std;

class ACap { //A약
public : 
	void Take() const { cout << "A 약 처방 " << endl; }
};

class BCap { // B약
public :
	void Take() const { cout << "B 약 처방 " << endl; }
};

class CCap { // C약
public :
	void Take() const { cout << "C  약 처장 " << endl; }
};

class Cap {
private : // 캡슐화 ( 3개의 클래스를 또다른 class로 캡슐화)
	ACap aCap;
	BCap bCap;
	CCap cCap;
public :
	void Take() const { // 이 함수로 인해 순서가 변경될 가능성이 적어진다.
		aCap.Take();
		bCap.Take();
		cCap.Take();
	}
};

class Patient {
public :
	void TakeCap(const Cap& cap) const { cap.Take(); }
};

//int main(void) {
//	Cap cap;
//	Patient patient;
//	patient.TakeCap();
//	return 0;
//}