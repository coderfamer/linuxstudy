#include "common.h"

int main_23()
{
	Sales_item item, items;
	map<string, int> mItems;

	while (cin >> item)
	{
		mItems[item.isbn()]++;
	}

	for (auto & m : mItems)
	{
		cout << m.first << " " << m.second << endl;
	}

	return 0;
}