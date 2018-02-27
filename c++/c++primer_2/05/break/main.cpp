#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string buf;

    while (cin >> buf && !buf.empty())
    {
        switch (buf[10]) {
        case '-':
            for (auto it = buf.begin(); it != buf.end(); it++){
                if (*it == ' ')
                {
                    break;
                }
            }
            break;
        default:
            break;
        }
    }
    return 0;
}
