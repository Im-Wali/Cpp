#include <iostream>

using namespace std;

class BaseOne
{
public :
	void SimpleFunc() { cout << "BaseOne" << endl; }
};

class BaseTwo
{
public :
	void SimpleFunc() { cout << "BaseTwo" << endl; }
};

class MultiDerived : public BaseOne, protected BaseTwo // 다중상속
{
public :
	void ComplexFunc()
	{
		BaseOne::SimpleFunc(); // 다중 상속 시 동일명의 멤버 변수, 함수에 접근하는 방법.
		BaseTwo::SimpleFunc();// 다중 상속 시 동일명의 멤버 변수, 함수에 접근하는 방법.
	}
};
//
//int main(void)
//{
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}