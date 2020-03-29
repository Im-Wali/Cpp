#include <iostream>

using namespace std;

class SoSimple
{
private :
	int num;
public :
	SoSimple(int n) : num(n) {}
	//복사 생성자
	SoSimple(const SoSimple& copy)
		: num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple &copy)" << endl;
	}

	void ShowData() 
	{
		cout << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	ob.ShowData();
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	
	cout << "함수 호출 전" << endl;

	SimpleFuncObj(obj);

	cout << "함수 호출 후" << endl;

	return 0;
}