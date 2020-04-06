#include <iostream>
#include <cstring>

using namespace std;


class Girl; // Girl 이라는 이름이 클래스의 이름임을 알림.

class Boy
{
private :
	int height;
	friend class Girl; // Girl 클래스에 대한 friend 선언 -> 다른 곳에 선언해도 됨.
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
	friend class Boy; //Boy 클래스에 대한 friend 선언.
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