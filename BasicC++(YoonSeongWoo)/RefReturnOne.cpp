#include <iostream>

using namespace std;

int& RefRetFunctionOne(int& ref) {
	ref++;
	return ref;
}

//int main(void) {
//	int num1 = 1;
//	int& num2 = RefRetFunctionOne(num1); // �����ڷ� ���� �� �޴� ���.
//	int num3 = RefRetFunctionOne(num1); // �Ϲ� ������ ���ϰ� �޴� ���.
//
//	num1++;
//	num2++;
//	num3 += 100;
//
//	cout << "num1 : " << num1 << endl;
//	cout << "num2 : " << num2 << endl;
//	cout << "num3 : " << num3 << endl;
//
//	return 0;
//}