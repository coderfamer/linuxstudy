<<<<<<< Updated upstream
#include <iostream>

using namespace std;

int fact(int val)
{
	int ret = 1;

	while (val > 1)
	{

		ret *= val--;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int j = fact(5);
	cout << "5! is " << j << endl;
	return 0;
=======
#include <iostream>
#include <vector>

using namespace std;

int fact(int val)
{
	int ret = 1;

	while (val > 1)
	{

		ret *= val--;
	}
	return ret;
}

int main(int argc, char const *argv[])
{
	int j = fact(5);
	cout << "5! is " << j << endl;
	return 0;
>>>>>>> Stashed changes
}