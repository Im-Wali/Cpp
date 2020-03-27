#include <iostream>

using namespace std;

//int main(void) {
//	//1) 참조자의 수의 제한 없음
//	int num1 = 20;
//	int &num2 = num1;
//	int &num3 = num1;
//
//	//2) 참조자에 대해 참조자 사용 가능
//	int &num4 = num2;
//
//	//3) 리터널, null, 미리 선언 불가능.
//	//int& num5 = 10; // > 에러 발생
//	//int& num6 = NULL; // > 에러 발생
//	//int& num7; // > 에러 발생
//
//	//4) 배열의 각 요소에 대해 참조자를 사용할 수 있다.
//	int arr[3] = { 1, 2, 3 };
//	int &num8 = arr[0];
//	int &num9 = arr[1];
//
//	//5) 포인트 변수에 대해 참조자를 사용할 수 있다.
//	int *num = &num1;
//	int *(&num10) = num;
//
//	return;
//
//}