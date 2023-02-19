#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 2));
    m1.insert(pair<int, int>(2, 4));
    m1.insert(pair<int, int>(3, 6));
    m1.insert(pair<int, int>(4, 8));
    m1.insert(pair<int, int>(5, 10));
    m1.insert(pair<int, int>(7, 14));
    m1.insert(pair<int, int>(6, 12));
    m1.insert(pair<int, int>(1, 52));

    int count = 0;
    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        count = 0;
        for (auto j = m1.begin(); j != m1.end(); j++)
        {
            if(i->first == j->first && i->second == j->second)
            {
                count++;
                cout<<i->first<<" : "<<i->second<<" = "<<count<<endl;
            }
        }
    }
}