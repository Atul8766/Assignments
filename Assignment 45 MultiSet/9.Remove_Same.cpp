#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1;
    m1.insert(1);
    m1.insert(2);
    m1.insert(3);
    m1.insert(4);
    m1.insert(6);
    m1.insert(3);
    int count = 0,value;
    for (auto i : m1)
    {
        count = 0;
        for (auto j : m1)
        {
            if (i == j)
            {
                count++;
                value = i;
            }
        }
        if(count == 2)
        {
            m1.erase(i);
            m1.insert(value);
        }
    }

    for(auto i : m1)
    {
        cout<<i<<" ";
    }

    return 0;
}