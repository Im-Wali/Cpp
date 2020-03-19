#include <iostream> 

void PracticeSalary(void) {
	int inSalary = 0;

	while (true) {
		std::cout << "판매 금액을 만원 단위로 입력 (-1 to end) : ";
		std::cin >> inSalary;

		if(inSalary != -1)
			std::cout << "이번 달 급여 : " << (50 + int(inSalary * 0.12)) << std::endl;
		else {
			std::cout << "프로그램을 종료합니다.";
			break;
		}
	}
}