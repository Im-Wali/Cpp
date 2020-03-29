#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private :
	char* name;
	int age;
public :
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Person()
	{
		delete[]name; // 이와 같이 소멸자에 멤버변수의 소멸자 호출이 가능하다.
		cout << "called destructor!" << endl;
	}
};


//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2("Jang dong gun", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//	// 소멸자를 명시적으로 사용하지 않아도 자동으로 소멸자가 호출된다.
//}