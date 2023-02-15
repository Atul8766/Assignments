#include <iostream>
using namespace std;

class Fact
{
    private:
    int n;
    int fact;
    public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    int getfactorial()
    {
        return fact;
    }
    void calculatefact()
    {
        int f = 1,i;
        if(n<=0)
        {
            fact = 1;
            return;
        }
        for(i=1; i<=n; i++)
        {
            f = f*i;
        }
        fact = f;
    }
};

int main()
{
    Fact f1;
    f1.setN(5);
    f1.calculatefact();
    cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getfactorial()<<endl;

    return 0;
}