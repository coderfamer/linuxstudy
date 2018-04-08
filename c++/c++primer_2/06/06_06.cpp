<<<<<<< Updated upstream
#include <iostream>

using namespace std;

int var(int temp1, int temp2)
{
        static int cnt = 0;
        double res = temp1 + temp2;
        ++cnt;
        cout << "this function run " << cnt << " times." << endl;
        return res;
}

int main(int argc, char const *argv[])
{
        int temp1,temp2,finum;
	do{
		cout << "please enter a number:" << endl;
                cin >> temp1 >> temp2;
                finum = var(temp1, temp2);
		cout << "the fact is " << finum << endl;
	}while(cin);
	
	return 0;
}
=======
#include <iostream>

using namespace std;

int var(int temp)
{
	static int var = 1;
	int cnt = 1;
	while (temp >1)
	{
		cnt *= var++;
		temp--;
	}
	return cnt;
}

int main(int argc, char const *argv[])
{
	int inum;
	int finum;
	do{
		cout << "please enter a number:" << endl;
		cin >> inum;
		finum = var(inum);
		cout << "the fact is " << finum << endl;
	}while(cin);
	
	return 0;
}
>>>>>>> Stashed changes
