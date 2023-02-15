#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void show(vector<int> arr)
{
    vector<int>::iterator i;
    for (i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 45, 6, 9};
    vector<int> arr2 = {9, 8, 7, 5, 6, 4, 2, 3};
    arr1.swap(arr2);
    show(arr1);
    cout<<endl;
    show(arr2);

    return 0;
}