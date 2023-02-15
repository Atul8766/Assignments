#include <iostream>
using namespace std;

class ReverseNumber
{
    public:
    void rev(int num)
    {
        while(num!=0)
        {
            int k = num%10;
            cout<<k;
            num = num/10;
        }
    }
};

int main()
{
    ReverseNumber r1;
    r1.rev(325);
    cout<<endl;
    return 0;
}