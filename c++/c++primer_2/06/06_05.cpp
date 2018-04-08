<<<<<<< Updated upstream
#include <iostream>
#include <cmath>

using namespace std;

double myABS(double val)
{
    if (val < 0)
    {
        return val * -1;
    }
    else
    {
        return val;
    }
}

double myABS2(double val)
{
    return abs(val);
}

int main()
{
    double num;
    cout << "please enter a number: ";
    cin >> num;
    cout << num << "'s abs is " << myABS(num) << endl;
    cout << num << "'s abs is " << myABS2(num) << endl;

    return 0;
}
=======
#include <iostream>
#include <cstdlib>

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
		cout  << "the number" << num << "'s abs is " << ret << endl;
	}while (cin);

	return 0;
}

int fact(int temp)
{
	int ret;
	ret = abs(temp);
	return ret;
}
>>>>>>> Stashed changes
