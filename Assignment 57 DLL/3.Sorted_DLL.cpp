#include <iostream>
using namespace std;

int main()
{
    int value = 8,k,sum = 0;
    while(value)
    {
        k = value % 10;
        sum = sum+k;
        value = value/10;
    }
    cout<<sum;
    return 0;
}