#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	Person(char* myName, int myAge)
	{
		int len = strlen(myName) + 1;
		name = new char[len];
		strcpy(name, myName);
		age = myAge;
	}

	Person()
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myName, int myAge)
	{
		name = myName;
		age = myAge;
	}

	void ShowPersonInfo() const
	{
		cout << "�̸� : " << name << ", " << "���� : " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor! " << endl;
	}
};

//int main(void)
//{
//	Person* parr[3];
//	char namestr[100];
//	int age;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "�̸� : ";
//		cin >> namestr;
//		cout << "���� : ";
//		cin >> age;
//		parr[i] = new Person(namestr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//
//	return 0;
//}