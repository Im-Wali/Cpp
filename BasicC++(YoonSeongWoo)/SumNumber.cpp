#include <iostream>

int SumNumber(void) {
	int num;
	int i = 0;
	int result = 0;

	for (i; i < 5; i++) {
		std::cout << (i + 1) << "��° ���� �Է� : ";
		std::cin >> num;
		result += num;
	}
	std::cout << "�հ� : " << result;
	return 0;
}
