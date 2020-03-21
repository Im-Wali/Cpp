#include <iostream>

void PracticeSwap(int* num1, int* num2) {
	int num3 = *num1;
	int num4 = *num2;

	*num1 = num4;
	*num2 = num3;
}

void PracticeSwap(char* char1, char* char2) {
	char char3 = *char1;
	char char4 = *char2;

	*char1 = char4;
	*char2 = char3;
}
void PracticeSwap(double* double1, double* double2) {
	double double3 = *double1;
	double double4 = *double2;

	*double1 = double4;
	*double2 = double3;
}

//int main(void) {
//	int num1 = 20, num2 = 30;
//	PracticeSwap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char char1 = 'A', char2 = 'B';
//	PracticeSwap(&char1, &char2);
//	std::cout << char1 << ' ' << char2 << std::endl;
//
//	double double1 = 1.111, double2 = 2.222;
//	PracticeSwap(&double1, &double2);
//	std::cout << double1 << ' ' << double2 << std::endl;
//}