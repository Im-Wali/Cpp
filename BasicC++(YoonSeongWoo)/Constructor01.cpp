#include <iostream>

using namespace std;

class SimpleClass {
private :
	int num1;
	int num2;

public :
	// ������_01
	SimpleClass() { // ������.
		num1 = 0;
		num2 = 0;
		cout << "������_01 ȣ��" << endl;
	}

	// ������_02
	SimpleClass(int num) { //������ �����ε�
		num1 = num;
		num2 = 0;
		cout << "������_02 ȣ��" << endl;
	}

	// ������_03
	SimpleClass(int n1, int n2) { //������ �����ε�
		num1 = n1;
		num2 = n2;
		cout << "������_03 ȣ��" << endl;
	}
	// ���� ������ �����ڿ� ��ó�� ���� �߻�.
	/* 
	SimpleClass(int n1 = 0, int n2 = 0) { //����Ʈ �� ����
		num1 = n1;
		num2 = n2;
	}
	*/

	void ShowData() const {
		cout << num1 << " " << num2 << endl << endl;
	}
};
//
//int main(void) {
//
//	// ���� �� ���������� ������ ������ ȣ��.
//	// ������_01 ȣ�� , SimpleClass sc1(); ������� �� ��� ���� �߻�. -> �Լ��� ������ ����� ������ ��������.
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	// ������_02 ȣ��.
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	// ������_03 ȣ��.
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//
//	return 0;
//}