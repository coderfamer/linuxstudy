#include "common.h"

int main_22()
{
	Sales_item item, items;


	for (int i = 0; i < 10; i++)
	{
		cin >> item;
		cout << item << endl;
		items += item;
	}

	cout << items.isbn() << endl;
	cout << items << endl;

	return 0;
}