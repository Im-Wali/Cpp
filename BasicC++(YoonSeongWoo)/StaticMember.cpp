#include <iostream>

using namespace std;

class SoSimple
{
private :
	static int simObjCnt;
	const static int stVal = 10000; // const static 변수의 경우 선언과 초기화 가능.

public :
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::simObjCnt; // static 멤버 변수 초기화 문법

class SoComplex
{
private :
	static int cmxObjCnt;

public :
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};

int SoComplex::cmxObjCnt = 0;

//int main(void)
//{
//	SoSimple sim1;
//	SoSimple sim2;
//
//	SoComplex cmx1;
//	SoComplex cmx2 = cmx1;
//	SoComplex();
//
//	return 0;
//}