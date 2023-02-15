#include <iostream>
#include <list>
#include <array>
using namespace std;

void show(list<int> l1)
{
    list<int>::iterator i;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    array<int, 8> arr = {1, 2, 3, 4, 5, 6, 9, 4};
    list<int> l1;

    for (const int &i : arr)
    {
        l1.push_back(i);
    }
    show(l1);
    return 0;
}