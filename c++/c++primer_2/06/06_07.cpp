#include <iostream>

using namespace std;

int val()
{
    static  int cnt = -1;
    ++cnt;
    return cnt;
}

int main()
{
    int num;
    do{
        cout << "please input any chars end with Enter:" << endl;
        cin >> num;
        cout << "the function called times: " << val() << endl;
    }while(cin);
    return 0;
}
