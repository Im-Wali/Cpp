#include <iostream>

int PracticeGugudan(void) {
	int gugudan;
	int i = 0;

	std::cout << "����� ���� �Է� ���ּ��� : ";
	std::cin >> gugudan;

	for (i; i < 9; i++) {
		std::cout << gugudan << " * " << (i + 1) << " = " << (gugudan * (i + 1)) << std::endl;
	}

	return 0;
}