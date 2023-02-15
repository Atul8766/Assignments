#include <iostream>
#include <list>
#include <iterator>
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
    list<int> l1 = {1, 2, 3, 4, 5, 6};
    list<int> l2 = {7, 8, 9, 10, 11, 12};

    list<int> l3;

    for (const int &i : l1)
    {
        l3.push_back(i);
    }
    for (const int &i : l2)
    {
        l3.push_back(i);
    }
    show(l3);
    return 0;
}