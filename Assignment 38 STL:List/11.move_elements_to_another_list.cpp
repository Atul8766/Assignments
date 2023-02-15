#include <iostream>
#include <list>
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
    list<int> l1 = {1,2,3,4,5,6,9};
    list<int> l2;

    for(const int &i : l1)
    {
        l2.push_back(i);
    }
    show(l2);
    return 0;
}