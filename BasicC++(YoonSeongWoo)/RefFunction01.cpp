#include <iostream>

using namespace std;

void RefFunction01(int& num1) {
	num1 += 10;
}

void RefFunction02(const int& num1) {
	// num1 += 10; //-> ���� �߻�.
}
//
//int main(void) {
//	int num = 10;
//
//	RefFunction01(num);
//
//	// �� �κи� ���� ���� ���� ���� �ʾҴ��� Ȯ���� �� ����.
//	cout << num << endl;
//
//	int num2 = 20;
//
//	RefFunction02(num2);
//	//RefFunction02 �Լ����� const�� �����ڸ� �޾ұ� ������ num2�� ���� ������� �ʾ����� Ȯ���� �� ����.
//	cout << num2 << endl;
//}