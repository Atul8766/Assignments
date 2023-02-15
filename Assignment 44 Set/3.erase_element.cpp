#include <iostream>
#include <set>
using namespace std;


int main()
{
    set<int> s1;
    s1.insert(2);
    s1.insert(4);
    s1.insert(6);
    s1.insert(8);
    s1.erase(6);
    for(auto i : s1)
    {
        cout<<i<<" ";
    }
    return 0;
}