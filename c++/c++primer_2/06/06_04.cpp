<<<<<<< Updated upstream
#include <iostream>

using namespace std;

int fact(int);

int main(int argc, char const *argv[])
{
	int num;
	int ret;
	do{
		cout << "please enter a num:" << endl;
		cin >> num;
		ret = fact(num);
		cout  << "the " << num << "'s fact is " << ret << endl;
	}while (cin);

	return 0;
}

int fact(int temp)
{
	int ret = 1;
	while (temp > 1)
	{
		ret *= temp--;
	}
	return ret;
=======
#include <iostream>

using namespace std;

int fact(int);

int main(int argc, char const *argv[])
{
	int num;
	int ret;
	do{
		cout << "please enter a num:" << endl;
		cin >> num;
		ret = fact(num);
		cout  << "the " << num << "'s fact is " << ret << endl;
	}while (cin);

	return 0;
}

int fact(int temp)
{
	int ret = 1;
	while (temp > 1)
	{
		ret *= temp--;
	}
	return ret;
>>>>>>> Stashed changes
}