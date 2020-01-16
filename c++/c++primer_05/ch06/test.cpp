#include <iostream>
#include <cstring>

using namespace std;

size_t count_calls(void) {
    static size_t ctr = 0;
    return ++ctr;
}

void test(const int *a) {
    cout << a[0] << endl;
}

int main()
{

    for (size_t i = 0; i != 10; ++i) {
        cout << count_calls() << " ";
    }

    int a = 10;
    test(&a);
    cout << endl;



    return 0;
}