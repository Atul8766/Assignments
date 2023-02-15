#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor of class A"<<endl;
    }
    A(int x)
    {
        cout<<x<<endl;
    }
    A(int x,int y)
    {
        cout<<x<<y<<endl;
    }
};

class B : public A
{
    public:
    B()
    {
        cout<<"Constructor Of Class B"<<endl;
    }
    B(int x):A(5)
    {
        cout<<x<<endl;
    }
    B(int x, int y):A(1,2)
    {
        cout<<x<<y<<endl;
    }
};

int main()
{
    B obj1;
    return 0;
}