#include <iostream>
#include <cstring>

using namespace std;

class BoundCheckIntArray
{
private :
	int* arr;
	int arrLen;

public :
	BoundCheckIntArray(int len) : arrLen(len)
	{
		arr = new int[len];
	}

	int& operator[] (int idx)
	{
		if (idx < 0 || idx >= arrLen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}

	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};
//
//int main(void)
//{
//	BoundCheckIntArray arr(5);
//	for (int i = 0; i < 5; i++)
//	{
//		arr[i] = (i + 1) * 11;
//	}
//
//	for (int j = 0; j < 6; j++)
//	{
//		cout << arr[j] << endl;
//	}
//	
//	return 0;
//}
