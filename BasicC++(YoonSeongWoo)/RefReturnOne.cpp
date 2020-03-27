#include <iostream>

using namespace std;

int& RefRetFunctionOne(int& ref) {
	ref++;
	return ref;
}

//int main(void) {
//	int num1 = 1;
//	int& num2 = RefRetFunctionOne(num1); // 참조자로 리턴 값 받는 경우.
//	int num3 = RefRetFunctionOne(num1); // 일반 변수로 리턴값 받는 경우.
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