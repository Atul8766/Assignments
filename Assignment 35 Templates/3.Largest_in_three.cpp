#include <iostream>
using namespace std;

template <class X,class Y,class Z, class R>

R Max_Element(X a, Y b, Z c)
{
    if(a>b)
    {
        if(a>c)
        {
            return a;
        }
        else
        return c;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    cout<<"Greater Element is : "<<Max_Element<char,char,char,char>('a','d','y')<<endl;
    return 0;
}