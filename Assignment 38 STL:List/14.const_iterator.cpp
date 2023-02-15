#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void show(list<int> l1)
{
    list<int>::const_iterator i;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main () 
{
    list<int> l1 = {1,2,3,4,5,6,9};
    list<int>::const_iterator ci;
    return 0;
}