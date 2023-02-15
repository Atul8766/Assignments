#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque<int> d  = {1,2,3,4,5,6,1};
    d.insert(d.end(), 4);
    deque<int>::reverse_iterator i;
    for(i=d.rbegin(); i!=d.rend(); i++)
    {
        cout<<*i<<" ";
    }


    return 0;
}