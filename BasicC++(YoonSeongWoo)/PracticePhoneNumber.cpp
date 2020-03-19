#include <iostream>

int PracticePhoneNumer(void) {
	char phoneNumber[100];

	std::cout << "폰 넘버를 입력하세요 : ";
	std::cin >> phoneNumber;

	std::cout << "당신의 전화번호는 " << phoneNumber << " 입니다." << std::endl;

	return 0;
}