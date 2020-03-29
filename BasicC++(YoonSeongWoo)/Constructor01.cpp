#include <iostream>

using namespace std;

class SimpleClass {
private :
	int num1;
	int num2;

public :
	// 생성자_01
	SimpleClass() { // 생성자.
		num1 = 0;
		num2 = 0;
		cout << "생성자_01 호출" << endl;
	}

	// 생성자_02
	SimpleClass(int num) { //생성자 오버로딩
		num1 = num;
		num2 = 0;
		cout << "생성자_02 호출" << endl;
	}

	// 생성자_03
	SimpleClass(int n1, int n2) { //생성자 오버로딩
		num1 = n1;
		num2 = n2;
		cout << "생성자_03 호출" << endl;
	}
	// 위에 세개의 생성자와 겹처서 에러 발생.
	/* 
	SimpleClass(int n1 = 0, int n2 = 0) { //디폴트 값 세팅
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
//	// 전역 및 지역변수의 형태의 생성자 호출.
//	// 생성자_01 호출 , SimpleClass sc1(); 방식으로 할 경우 에러 발생. -> 함수와 구분이 힘들기 때문에 지원안함.
//	SimpleClass sc1;
//	sc1.ShowData();
//
//	// 생성자_02 호출.
//	SimpleClass sc2(100);
//	sc2.ShowData();
//
//	// 생성자_03 호출.
//	SimpleClass sc3(100, 200);
//	sc3.ShowData();
//
//	return 0;
//}