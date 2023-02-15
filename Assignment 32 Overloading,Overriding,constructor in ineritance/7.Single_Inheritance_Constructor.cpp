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

int main()
{
    B obj;
    return 0;
}