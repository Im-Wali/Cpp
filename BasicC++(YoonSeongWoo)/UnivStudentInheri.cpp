#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private :
	int age;
	char name[50];

public :
	Person(int myage, const  char* myname) : age(myage)
	{
		cout << "Person Constructor Call...." << endl;
		strcpy(name, myname);
	}

	~Person()
	{
		cout << "Person Destructor Call...." << endl;
	}
	
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person
{
private :
	char major[50];

public :
	UnivStudent(const char* myname, int myage, const  char* mymajor)
		: Person(myage, myname) // 부모클래스의 생성자 호출.
	{
		cout << "UnivStudent Constructor Call...." << endl;
		strcpy(major, mymajor);
	}
	~UnivStudent()
	{
		cout << "UnivStudent Destructor Call...." << endl;
	}

	void WhoAreYour() const
	{
		WhatYourName(); //부모 클래스의 멤버 함수 호출.
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

//int main(void)
//{
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYour();
//
//	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
//	ustd2.WhoAreYour();
//
//	return 0;
//}