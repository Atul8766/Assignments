#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4, 5, 6, 9, 7, 8};
    list<int>::iterator i;
    for (i = l1.end(); i != l1.begin(); i--)
    {
        cout << *i << " ";
    }
    return 0;
}