#include <iostream>

using namespace std;

class Base
{
public :
	Base() { cout << "Base Constructor" << this << endl; }
	void SimpleFunc() { cout << "BaseOne" << this << endl; }
};

class MiddleDerivedOne : virtual public Base // ���� ���
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

class MiddleDerivedTwo : virtual public Base // ���� ���
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
		SimpleFunc(); // ���� Ŭ���� ���� �ۼ����� �ʾƵ� Base ��� �Լ��� ����.
	}
};

//int main(void)
//{
//	cout << "��ü ���� �� ---------" << endl;
//	LastDerived ldr;
//	cout << "��ü ���� �� ----------" << endl;
//
//	cout << endl;
//
//	ldr.ComplexFunc();
//
//	return 0;
//	
//}