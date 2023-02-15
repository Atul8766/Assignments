#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{   
    deque<int> d;
    d.assign(5,10);
    deque<int>::iterator i;
    for(i=d.begin(); i!=d.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}