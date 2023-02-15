#include <iostream>
using namespace std;

void selfexcept(int arr[] ,int size)
{
    int mul = 1;
    for(int i =0; i<size; i++)
    {
        mul = 1;
        for(int j=0; j<size; j++)
        {
        if(arr[i] != arr[j])
        {
            mul = mul*arr[j];
        }
        }
        cout<<mul<<" ";
    }
}

int main()
{
    int arr [] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    selfexcept(arr,size);
    return 0;
}