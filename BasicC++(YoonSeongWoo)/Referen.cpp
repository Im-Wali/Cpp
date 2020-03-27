//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int num1 = 1020;
//	int& num2 = num1; // 참조자 선언
//	
//	num2 = 2010; // 포인트 변수와 다르게 사용
//
//	cout << "VAL : " << num1 << endl;
//	cout << "REF : " << num2 << endl;
//	cout << endl;
//
//	cout << "VAL : " << &num1 << endl;
//	cout << "REF : " << &num2 << endl;
//	cout << endl;
//
//	int num3 = 3040;
//	int* num4 = &num3;
//
//	*num4 = 4030; 
//
//	cout << "VAL : " << num3 << endl;
//	cout << "POI : " << *num4 << endl;
//	cout << endl;
//
//	cout << "VAL : " << &num3 << endl;
//	cout << "POI : " << &num4 << endl;
//	cout << endl;
//
//	return 0;
//}