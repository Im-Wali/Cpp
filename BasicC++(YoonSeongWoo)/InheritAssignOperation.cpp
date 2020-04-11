#include <iostream>

using namespace std;

class First
{
private :
	int num1, num2;
public :
	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
	{}

	void ShowData()
	{
		cout << num1 << ", " << num2 << endl;
	}

	First& operator=(const First& ref)
	{
		cout << "First& operator=()" << endl;
		num1 = ref.num1;
		num2 = ref.num2;

		return *this;
	}
};

class Second : public First
{
private :
	int num3, num4;
public :
	Second(int n1, int n2, int n3 = 0, int n4 = 0)
		: First(n1, n2), num3(n3), num4(n4)
	{}

	void ShowData()
	{
		First::ShowData();
		cout << num3 << ", " << num4 << endl;
	}

	// 해당 operator= 주석 처리 시와 결과 비교.
	Second& operator=(const Second& ref)
	{
		First::operator=(ref);
		// 연산자 오버라이딩 시 상위 클래스의 함수 호출.
		cout << "Second& operator=()" << endl;
		num3 = ref.num3;
		num4 = ref.num4;
		
		return *this;
	}
};


//int main(void)
//{
//	Second ssrc(111, 222, 333, 444);
//	Second scpy(0, 0, 0, 0);
//
//	scpy = ssrc;
//	scpy.ShowData();
//	return 0;
//}