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
    forward_list<int> l2;
    for(const int &i : l1)
    {
        l2.push_front(i);    
    }
    show(l2);
    return 0;

}