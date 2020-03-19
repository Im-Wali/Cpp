#include <iostream>

int SimpleAdder(void) {
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;

	int val2;	// C언어와 다르게 중간에 지역변수 선언 가능하다.
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;
	return 0;

}