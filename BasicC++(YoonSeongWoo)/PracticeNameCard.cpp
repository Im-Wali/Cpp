#include <iostream>
#include <cstring>

using namespace std;
namespace COMP_POS {
	enum {
		CLERK = 1, SENIOR = 2, ASSIST = 3, MANAGER = 4
	};
}
class NameCard {
private :
	char* name;
	char* compName;
	char* phoneNum;
	int position;
public :
	NameCard(const char* myName, const char* myCompName, const char* myPhoneNum, int myPosition) {
		int nameLen = strlen(myName) + 1 ; // 공백문자까지 복사하기 위해 +1 해준다.
		int compNameLen = strlen(myCompName) + 1;
		int phoneNumLen = strlen(myPhoneNum) + 1;

		name = new char[nameLen];
		compName = new char[compNameLen];
		phoneNum = new char[phoneNumLen];

		strcpy(name, myName);
		strcpy(compName, myCompName);
		strcpy(phoneNum, myPhoneNum);

		position = myPosition;
		
	}

	void ShowNameCardInfo() {
		char* positionName = new char[2];
		switch (position) {
		case COMP_POS::CLERK:
			strcpy(positionName, "사원");
			break;
		case COMP_POS::SENIOR:
			strcpy(positionName, "주임");
			break;
		case COMP_POS::ASSIST:
			strcpy(positionName, "대리");
			break;
		case COMP_POS::MANAGER:
			strcpy(positionName, "과장");
			break;
		default :
			strcpy(positionName, "없음");
			break;
		}
		cout << "이름 : " << name << endl;
		cout << "회사 : " << compName << endl;
		cout << "전화 번호 : " << phoneNum << endl;
		cout << "직급 : " << positionName << endl << endl;
	}

	~NameCard() {
		delete[]name; //stlr +1을 안할 경우 여기서 멈춤.
		delete[]compName;
		delete[]phoneNum;

		cout << "소멸자 호출" << endl;
	}

};

//int main(void) {
//	NameCard manClerk("Lee", "ABCeng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard manSernior("Hong", "OrageEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
//
//	manClerk.ShowNameCardInfo();
//	manSernior.ShowNameCardInfo();
//	manAssist.ShowNameCardInfo();
//
//	//delete manClerk;
//	//delete manSernior;
//	//delete manAssist;
//
//	return 0;
//}