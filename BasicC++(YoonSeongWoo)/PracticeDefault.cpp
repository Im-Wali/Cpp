#include <iostream> 

int SimpleFunc(int a = 10) {
	return a + 1;
}

int SimpleFunc() {
	return 10;
}

// 에러 발생
//int main(void) { 
//	SimpleFunc();
//}