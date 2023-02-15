#include <iostream>
using namespace std;

class Numbers
{
    private:
    int x,y,z;
    public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    int showData()
    {
        return x;
    }
    int negate()
    {
        return z;
    }
    void calculate()
    {
        z = x+(-x);
    }
};

int main()
{
    Numbers n1;
    n1.setData(3,4);
    n1.calculate();
    cout<<"Negation of "<<n1.showData()<<" is "<<n1.negate()<<endl;
    return 0;
}