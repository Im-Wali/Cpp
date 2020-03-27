#include <iostream>

using namespace std;

void RefFunction01(int& num1) {
	num1 += 10;
}

void RefFunction02(const int& num1) {
	// num1 += 10; //-> 에러 발생.
}
//
//int main(void) {
//	int num = 10;
//
//	RefFunction01(num);
//
//	// 이 부분만 보고 값이 변경 되지 않았는지 확신할 수 없다.
//	cout << num << endl;
//
//	int num2 = 20;
//
//	RefFunction02(num2);
//	//RefFunction02 함수에서 const로 참조자를 받았기 때문에 num2의 값이 변경되지 않았음을 확신할 수 있음.
//	cout << num2 << endl;
//}