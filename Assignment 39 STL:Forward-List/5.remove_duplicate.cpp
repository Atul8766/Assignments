#include <iostream>
#include <forward_list>
#include <iterator>
#include <set>
using namespace std;

void show(forward_list<int> l1)
{
    forward_list<int>::iterator i;

    for(i=l1.begin(); i!=l1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

int main()
{
    forward_list<int> l1 = {1,2,1,2,6,3,8,9};
    forward_list<int> l2;
    set<int , greater<int>> s;
    for(const int &i : l1)
    {
        s.insert(i);
    }
    for(const int &i : s)
    {
        l2.push_front(i);
    }
    show(l2);
    
    return 0;
}