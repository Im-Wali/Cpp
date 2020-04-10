#include <iostream>

using namespace std;

class Base
{
public :
	Base() { cout << "Base Constructor" << this << endl; }
	void SimpleFunc() { cout << "BaseOne" << this << endl; }
};

class MiddleDerivedOne : virtual public Base // 가상 상속
{
public :
	MiddleDerivedOne() : Base()
	{
		cout << "MiddleDerivedOne Constructor" << endl;
	}
	void MiddleFuncOne()
	{
		SimpleFunc();
		cout << "MiddleDerivedOne " << endl;
	}
};

class MiddleDerivedTwo : virtual public Base // 가상 상속
{
public :
	MiddleDerivedTwo() : Base()
	{
		cout << "MiddleDerivedTwo" << endl;
	}

	void MiddleFuncTwo() {
		SimpleFunc();
		cout << "MiddleFuncTwo" << endl;
	}
};

class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
{
public :
	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo()
	{
		cout << "LastDerived Constructor" << endl;
	}
	void ComplexFunc()
	{
		MiddleFuncOne();
		MiddleFuncTwo();
		SimpleFunc(); // 상위 클래스 명의 작성하지 않아도 Base 멤버 함수에 접근.
	}
};

//int main(void)
//{
//	cout << "객체 생성 전 ---------" << endl;
//	LastDerived ldr;
//	cout << "객체 생성 후 ----------" << endl;
//
//	cout << endl;
//
//	ldr.ComplexFunc();
//
//	return 0;
//	
//}