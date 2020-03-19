#include <iostream>

int SumNumber(void) {
	int num;
	int i = 0;
	int result = 0;

	for (i; i < 5; i++) {
		std::cout << (i + 1) << "번째 정수 입려 : ";
		std::cin >> num;
		result += num;
	}
	std::cout << "합계 : " << result;
	return 0;
}
