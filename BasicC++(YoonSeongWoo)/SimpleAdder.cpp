#include <iostream>

int SimpleAdder(void) {
	int val1;
	std::cout << "ù ��° ���� �Է� : ";
	std::cin >> val1;

	int val2;	// C���� �ٸ��� �߰��� �������� ���� �����ϴ�.
	std::cout << "�� ��° ���� �Է� : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "���� ��� : " << result << std::endl;
	return 0;

}