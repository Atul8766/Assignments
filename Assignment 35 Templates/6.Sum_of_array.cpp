#include <iostream>
using namespace std;

template <class Arr,class Size=int, class INT = int>

INT Sum(Arr arr[],Size n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum  = sum+arr[i];
    }
    return sum;
}

int main()
{
    int arr []= {0,1,2,3,4,5,6,7,8,9};
    cout<<Sum(arr,10);
    return 0;
}