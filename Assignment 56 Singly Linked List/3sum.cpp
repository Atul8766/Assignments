#include <iostream>
using namespace std;

void sum(int *, int);

int main()
{
    int arr[] = {-1,0,1,2,-1,-4};
    int target = 0;
    sum(arr,target);
    return 0;
}

void sum(int arr[],int target)
{
    for(int i=0; i<=5; i++)
    {
        for(int j = 0; j<=5; j++)
        {
            for(int k = 0; k<=5; k++)
            {
                if(arr[i]!=arr[j]!=arr[k])
                {
                    int ans = arr[i]+arr[j]+arr[k];
                    if(ans == target)
                    {
                        cout<<i<<" "<<j<<" "<<k;
                        return;
                    }
                }
            }
        }
    }
}