#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1,1,0,-3,3};
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    int i, j = 0, count = size, mul = 1,k=0;
    int arr1[size+1] = {0};
    for (i = 0; i <= count + size; i++)
    {
        if (arr[i] != arr[j])
        {
            mul = mul * arr[i];
        }
        if (i == size)
        {
            // cout << mul << " ";
            arr1[k++] = mul;
            j++;
            count--;
            mul = 1;
            i = -1;
        }
    }

    for(int l=0; l<=size; l++)
    {
        cout<<arr1[l]<<" ";
    }
    
    return 0;
}