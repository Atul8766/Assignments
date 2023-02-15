#include <iostream>
#include <array>
#include <iterator>
#include <algorithm>
using namespace std;

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 19, 5, 1, 7, 6, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << "Actual Array is : ";
    show(arr, size);
    cout << endl;
    // sort in ascending order
    cout << "Sorted Array is : ";
    sort(arr, arr + size);
    show(arr, size);
    cout << endl;
    // sort in descending order

    cout << "Sorted in descending order : ";
    sort(arr, arr + size, greater<int>());
    cout<<endl;
    return 0;
}
