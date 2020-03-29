#include <iostream>

using namespace std;

class SoSimple
{
private :
	int num1;
	int num2;
public :
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2) {}
	
	// 복사 생성자
	SoSimple(const SoSimple& copy) // 복사의 개념을 무너뜨리지 않게 const 선언
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl << endl;
	}
};
//
//int main(void)
//{
//	SoSimple sim1(15, 30);
//	cout << "생성 및 초기화 직전 " << endl;
//
//	SoSimple sim2 = sim1; // 자동으로 SoSimple sim2(sim1) 으로 변환
//	sim2.ShowSimpleData();
//
//	return 0;
//}