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
    forward_list<int> l1 = {1,2,3,4,5,6,7,8,9,10};
    l1.reverse();
    show(l1);
    return 0;
}
