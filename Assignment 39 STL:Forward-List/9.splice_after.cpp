#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

void show(forward_list<int> l1)
{
    forward_list<int>::iterator i;

    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    // forwardlist1={3,2,9}
    // forwardlist2={8,1,2}
    forward_list<int> l1 = {3, 2, 9};
    forward_list<int> l2 = {8,5};
    l1.splice_after(l2.begin(),l2,l1.begin(),l1.end());
    show(l2);

    return 0;

}