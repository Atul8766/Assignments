#include <iostream>
using namespace std;

class Rupee
{
    private:
    int x;
    public:
    Rupee(int x)
    {
        this->x = x;
    }
    operator int ()
    {
        return x;
    }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout<<x<<endl;
    return 0;
}