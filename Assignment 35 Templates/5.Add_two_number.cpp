#include <iostream>
using namespace std;

template <class num1=int, class num2=int,class Return>

Return Add(num1 x, num2 y)
{
    return(x+y);
}

int main()
{
    cout<<"Sum is : "<<Add<int,int,int>(2,8)<<endl;
    return 0;
}