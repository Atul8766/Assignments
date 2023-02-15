#include <iostream>
using namespace std;

class Factorial
{
    private:
    int f=1,num;
    public:
    Factorial(int x)
    {
        num = x;
    }
    Factorial (const Factorial& x)
    {
        int i;
        for(i = 1; i<=x.num; i++)
        {
            f = f*i;
        }
    }

    int getfactorial()
    {
        return f;
    }
};

int main()
{
    Factorial f1=5;
    Factorial f2 = f1;
    cout<<"Factorial is : "<<f2.getfactorial();
    return 0;
}