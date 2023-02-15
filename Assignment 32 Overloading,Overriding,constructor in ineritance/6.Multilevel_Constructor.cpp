#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor of Class A"<<endl;
    }
};
class B : public A
{
    public:
    B():A()
    {
        cout<<"Constructor of Class B"<<endl;
    }
};
class C : public B
{
    public:
    C():B()
    {
        cout<<"Constructor of Class C"<<endl;
    }
};

int main()
{
    C obj;
    return 0;
}