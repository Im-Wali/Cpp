#include <iostream>

using namespace std;

//int main(void) {
//	//1) �������� ���� ���� ����
//	int num1 = 20;
//	int &num2 = num1;
//	int &num3 = num1;
//
//	//2) �����ڿ� ���� ������ ��� ����
//	int &num4 = num2;
//
//	//3) ���ͳ�, null, �̸� ���� �Ұ���.
//	//int& num5 = 10; // > ���� �߻�
//	//int& num6 = NULL; // > ���� �߻�
//	//int& num7; // > ���� �߻�
//
//	//4) �迭�� �� ��ҿ� ���� �����ڸ� ����� �� �ִ�.
//	int arr[3] = { 1, 2, 3 };
//	int &num8 = arr[0];
//	int &num9 = arr[1];
//
//	//5) ����Ʈ ������ ���� �����ڸ� ����� �� �ִ�.
//	int *num = &num1;
//	int *(&num10) = num;
//
//	return;
//
//}