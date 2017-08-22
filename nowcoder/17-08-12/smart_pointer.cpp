#include <iostream>
#include <string>
#include <memory>

using namespace std;
using std::auto_ptr;
using std::shared_ptr;
using std::unique_ptr;

class report
{
private:
    string str;
public:
    report(const string s):str(s)
    {
        cout << "object created." << endl;
    }
    ~report()
    {
        cout << "object deleted." << endl;
    }
    void comment() const
    {
        //cout << 1 << endl;
        cout << str << endl;
    }
};

int main()
{
    {
        auto_ptr<report> ps(new report("using auto ptr"));
        ps->comment();
    }
    {
        shared_ptr<report> ps(new report("using shard_ptr"));
        ps->comment();
    }
    {
        unique_ptr<report> ps(new report("using unique_ptr"));
        ps->comment();
    }


    return 0;
}










