#include <iostream>
using namespace std;

void PracticeRefSwap(int *(&num1), int *(&num2)) {
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	int* swap = num1;
	num1 = num2;
	num2 = swap;
}

int main(void) {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

	PracticeRefSwap(ptr1, ptr2);

	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

}