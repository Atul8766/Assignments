#include <iostream>
#include <array>
using namespace std;

int getodd(array<int, 10> arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0 && count!=1)
        {
           return arr[i];
        }
    }
    return -1;
}

int main()
{
    array<int, 10> arr = {10, 19, 5, 1, 7, 3, 2, 3, 3, 1};
    int ans = getodd(arr, arr.size());
    cout << ans << endl;
    return 0;
}