#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1;
    list<int>::iterator i;
    for (int i = 0; i < 5; i++)
    {
        l1.push_back(i*100);
    }
    for(i=l1.begin(); i!=l1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<l1.back();
    cout<<"\n";
    l1.push_front(5);
    l1.reverse();
    l1.sort();
    l1.pop_front();
    l1.pop_back();
    return 0;
}