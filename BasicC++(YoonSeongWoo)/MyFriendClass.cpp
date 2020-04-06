#include <iostream>
#include <cstring>

using namespace std;


class Girl; // Girl �̶�� �̸��� Ŭ������ �̸����� �˸�.

class Boy
{
private :
	int height;
	friend class Girl; // Girl Ŭ������ ���� friend ���� -> �ٸ� ���� �����ص� ��.
public :
	Boy(int len) : height(len) {}

	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private :
	char phNum[20];
public :
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}

	void ShowYourFriendINfo(Boy& frn);
	friend class Boy; //Boy Ŭ������ ���� friend ����.
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number : " << frn.phNum << endl;
}

void Girl::ShowYourFriendINfo(Boy& frn)
{
	cout << "His height : " << frn.height << endl;
}

//int main(void)
//{
//	Boy boy(170);
//	Girl girl("010-1111-1111");
//
//	boy.ShowYourFriendInfo(girl);
//	girl.ShowYourFriendINfo(boy);
//}