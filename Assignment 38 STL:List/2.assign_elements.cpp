#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list <int> l1;
    l1.assign(3,1);
    l1.insert(l1.begin(),5);
    list <int>:: iterator i;
    for(i=l1.begin(); i!=l1.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}