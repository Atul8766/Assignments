#include <iostream>
using namespace std;

class A
{
    protected:
    int v1;
    public:
    friend void swap();
};
class B:public A
{
    protected:
    int v2;
    public:
    friend void swap();
};

void swap()
{

}
