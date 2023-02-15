#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1;
    int size;
    cout << "How many elements you want to enter : ";
    cin >> size;
    int i, element;
    for (i = 0; i < size; i++)
    {
        cin >> element;
        l1.push_back(element);
    }
    list<int>::iterator e;
    for (e = l1.begin(); e != l1.end(); e++)
    {
        cout << *e << " ";
    }
    return 0;
}