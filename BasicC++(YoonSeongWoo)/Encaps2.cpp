#include <iostream>

using namespace std;

class ACap { //A��
public : 
	void Take() const { cout << "A �� ó�� " << endl; }
};

class BCap { // B��
public :
	void Take() const { cout << "B �� ó�� " << endl; }
};

class CCap { // C��
public :
	void Take() const { cout << "C  �� ó�� " << endl; }
};

class Cap {
private : // ĸ��ȭ ( 3���� Ŭ������ �Ǵٸ� class�� ĸ��ȭ)
	ACap aCap;
	BCap bCap;
	CCap cCap;
public :
	void Take() const { // �� �Լ��� ���� ������ ����� ���ɼ��� ��������.
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