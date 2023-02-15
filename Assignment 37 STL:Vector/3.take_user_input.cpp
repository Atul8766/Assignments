#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr;
    cout << "Enter how many element you want to enter : ";
    int size;
    cin >> size;
    int value;
    for (int i = 0; i < size; i++)
    {
        cin >> value ;
        arr.push_back(value);
    }

    vector<int>::iterator i;
    for (i = arr.begin(); i != arr.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}