#include <iostream>
using namespace std;

class Counter
{
    private:
    int count=0;
    public:
    Counter()
    {
        cout<<++count;
    }
};

int main()
{
    Counter c1;
    return 0;
}

