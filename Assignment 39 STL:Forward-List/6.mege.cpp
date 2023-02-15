#include <iostream>
#include <forward_list>
#include <iterator>
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
    forward_list<int> l2 = {10,11,12,13};
    forward_list<int> l3;

    for(const int &i : l1)
    {
        l3.push_front(i);
    }
    for(const int &i : l2)
    {
        l3.push_front(i);
    }
    show(l3);

    return 0;
}