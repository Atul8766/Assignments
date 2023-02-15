#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    s1.insert(6);
    for(auto i : s1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
     auto it = s1.lower_bound(2);
    cout<<"lower bound is "<<*it<<endl;
    auto it1 = s1.lower_bound(7);
    cout<<"Lower bound is "<<*it1;

    return 0;
}