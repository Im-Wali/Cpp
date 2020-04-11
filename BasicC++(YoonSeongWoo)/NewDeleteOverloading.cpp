#include <iostream>

using namespace std;
//
//class Point
//{
//private :
//	int xpos, ypos;
//public :
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
//	{}
//
//	friend ostream& operator<<(ostream& os, const Point& pos);
//
//	// 자동으로 static 함수가 된다. static이기 때문에 객체가 생성되기 전에 호출이 가능하다.
//	void* operator new(size_t size)
//	{
//		cout << "operator new : " << size << endl;
//		void* adr = new char[size];
//		return adr;
//	}
//	// 자동으로 static 함수가 된다.
//	void operator delete (void* adr)
//	{
//		cout << "operator delete()" << endl;
//		delete[]adr;
//	}
//};
//
//ostream& operator<<(ostream& os, const Point& pos)
//{
//	os << "[" << pos.xpos << ", " << pos.ypos << "]" << endl;
//	return os;
//}

//int main(void)
//{
//	Point* ptr = new Point(3, 4);
//	cout << *ptr;
//	delete ptr;
//	return 0;
//}

