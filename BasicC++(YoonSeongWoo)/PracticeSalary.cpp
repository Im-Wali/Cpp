#include <iostream> 

void PracticeSalary(void) {
	int inSalary = 0;

	while (true) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end) : ";
		std::cin >> inSalary;

		if(inSalary != -1)
			std::cout << "�̹� �� �޿� : " << (50 + int(inSalary * 0.12)) << std::endl;
		else {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
	}
}