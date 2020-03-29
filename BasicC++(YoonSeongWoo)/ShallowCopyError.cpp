#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
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

//
//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2 = man1; // 디폴트 복사 생성자를 이용한 얕은 복사.
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}