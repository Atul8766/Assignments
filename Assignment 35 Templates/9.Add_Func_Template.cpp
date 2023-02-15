#include <iostream>
using namespace std;

template <class T,class F=int,class R=float>

R add(T x, F y)
{
    return (x+y);
}
int main()
{
    cout<<"Sum is : "<<add<int,float,float>(2,6.9)<<endl;

    return 0;
}