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
    forward_list<int> l1;
    l1.assign(5,5);
    show(l1);
    return 0;
}