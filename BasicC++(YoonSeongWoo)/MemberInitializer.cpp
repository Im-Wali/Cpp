#include <iostream>

using namespace std;

class Item {
private :
	const int ITEM_PRICE; //상품가격 -> 상품 가격은 변경되면 안되지만, 상품 마다 가격이 다른 경우.
	int &numOfItem;	// 상품갯수 -> 참조 변수도 초기화 가능.
public :
	Item(int price, int &num)
		: ITEM_PRICE(price), numOfItem(num) {} // 멤버변수 이니셜라이저를 통한 초기화.
};