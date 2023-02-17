#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1;
    m1.insert(2);
    m1.insert(3);
    m1.insert(4);
    m1.insert(5);
    m1.insert(6);
    m1.insert(7);
    m1.insert(8);
    m1.insert(9);
    m1.insert(10);

    for (auto i : m1)
    {
        if (i % 2 != 0)
        {
            m1.erase(i);
        }
    }
    for(auto i : m1)
    {
        cout<<i<<" ";
    }
    return 0;
}