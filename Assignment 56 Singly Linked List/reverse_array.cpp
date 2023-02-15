#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    int j = 3;
    for(int i=0; i<=3; i++)
    {
        int tmep = arr[i];
        arr[i] = arr[j];
        arr[j] = tmep;
        j--;
    }

    for(int  i =0; i<=3; i++)
    {
        cout<<arr[i];
    }
    return 0;
}