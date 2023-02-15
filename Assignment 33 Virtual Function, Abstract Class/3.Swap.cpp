#include <iostream>
using namespace std;

class Swap
{
    private:
    int a,temp;
    public:
    void setX(int x)
    {
        a = x;
    } 
    int getX()
    {
        return a;
    }
    void swaps()
    {
       temp = getX();
       a = temp;
       temp = getX(); 
    }
    void display()
    {
        cout<<a<<"   "<<temp;
    }
};

int main()
{
    Swap *s1,*s2,v1,v2;
    s1 = &v1;
    s2 = &v2;
    s1->setX(4);
    s2->setX(5);
    s1->display();
    s2->display();
    return 0;
}