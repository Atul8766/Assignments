#include <iostream>
using namespace std;

template <class Value1,class Value2,class Temp>

void Swap(Value1 a, Value2 b)
{
    cout<<"Before Swap : "<<a<<","<<b<<endl;
    Temp temp;
    temp  = a;
    a = b;
    b = temp;

    cout<<"After Swap : "<<a<<","<<b<<endl;
}

int main()
{   
    Swap<int,int,int>(2,6);
    return 0;
}