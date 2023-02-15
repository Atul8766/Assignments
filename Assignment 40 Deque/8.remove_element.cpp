#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

void show(deque<int> d)
{
    deque<int>::iterator i;
    for(i=d.begin(); i!=d.end(); i++)
    {
        cout<<*i<<" ";
    }
}
int main()
{
    deque<int> d = {1,2,3,4,5,6,8,9};
    deque<int>::iterator i;
    deque<int>::iterator j;
    // this method is use to delete on any specific postion
    // i= d.begin();
    // i++;
    // i++;
    // i++;
    // d.erase(i);
    // show(d);

    // now let's see how to delete in range

    i=d.begin();
    j=d.end();
    j--;
    j--;
    d.erase(i,j);
    show(d);

    return 0;
}
