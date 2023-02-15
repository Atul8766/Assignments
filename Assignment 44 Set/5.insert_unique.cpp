#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(1);

    for(auto i : s1)
    {
        cout<<i<<" ";
    }
    return 0;
}