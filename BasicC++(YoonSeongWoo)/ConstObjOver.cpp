#include <iostream>

using namespace std;

class SoSimple
{
private :
	int num;
public :
	SoSimple(int n) : num(n) {}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData()
	{
		cout << "ShowData �Լ� : " << num << endl;
	}

	void ShowData() const
	{
		cout << "const ShowData �Լ� : " << num << endl;
	}
};
//int main(void)
//{
//	SoSimple obj1(10);
//	const SoSimple obj2(7);
//
//	obj1.AddNum(10);
//	//obj2.AddNum(7); //���� �߻�.
//
//	obj1.ShowData();
//	obj2.ShowData();
//}