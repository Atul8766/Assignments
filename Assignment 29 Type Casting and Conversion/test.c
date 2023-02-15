#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,3,1};
    int size = sizeof(arr)/sizeof(int);
    int i,ans = 0,target = 3;
    for(i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}