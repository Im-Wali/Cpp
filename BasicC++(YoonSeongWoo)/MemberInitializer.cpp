#include <iostream>

using namespace std;

class Item {
private :
	const int ITEM_PRICE; //��ǰ���� -> ��ǰ ������ ����Ǹ� �ȵ�����, ��ǰ ���� ������ �ٸ� ���.
	int &numOfItem;	// ��ǰ���� -> ���� ������ �ʱ�ȭ ����.
public :
	Item(int price, int &num)
		: ITEM_PRICE(price), numOfItem(num) {} // ������� �̴ϼȶ������� ���� �ʱ�ȭ.
};