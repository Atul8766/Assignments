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
    m1.insert(pair<int, int>(6, 12));

    for (auto it = m1.rbegin(); it != m1.rend(); it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
        
    }
    return 0;
}