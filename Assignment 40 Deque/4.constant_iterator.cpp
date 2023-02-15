#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque<int> d  = {1,2,3,4,5,6,1};
    d.insert(d.end(), 4);
    deque<int>::const_iterator i = d.begin();
    while(i!=d.end())
    {
        cout<<*i++<<" ";
    }


    return 0;
}