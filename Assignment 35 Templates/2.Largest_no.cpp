#include <iostream>
using namespace std;

template <class T=int, class F=int,class R=float>

R Max(T x, F y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    cout<<"Greater No is : "<<Max<float,int>(6.2,6)<<endl;
    return 0;
}