#include "common.h"


int main()
{
	Sales_item item;
	map<string, vector<Sales_item>> mItems;
	int count = 0;

	while (cin >> item)
	{
		mItems[item.isbn()].push_back(item);
	}

	for (auto &m : mItems)
	{
		for (auto &v : m.second)
		{
			cout << v << endl;
		}
	}

	return 0;
}