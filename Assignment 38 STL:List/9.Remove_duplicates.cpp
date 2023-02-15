#include <iostream>
#include <list>
#include <iterator>
#include <unordered_set>
using namespace std;

void show(unordered_set<int> l1)
{
    unordered_set<int>::iterator i;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l1 = {1, 2, 3, 4, 5, 1, 2, 3, 5};
    unordered_set<int> s;
    
    for (int const &i : l1)
    {
        s.insert(i);
    }

    show(s);
    return 0;
}