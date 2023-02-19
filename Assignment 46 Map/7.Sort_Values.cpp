#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 6));
    m1.insert(pair<int, int>(2, 8));
    m1.insert(pair<int, int>(6, 3));
    m1.insert(pair<int, int>(8, 2));

    for (auto i = m1.begin(); i != m1.end(); i++)
    {
        for (auto j = m1.begin(); j != m1.end(); j++)
        {
            if(i->second >= j->second)
            {
                auto temp = i->second;
                i->second = j->second;
                j->second = temp;
            }
        }
    }

    auto it = m1.begin();
    while(it != m1.end())
    {
        cout<<it->first<<" : "<<it->second<<endl;
        it++;
    }

    return 0;
}