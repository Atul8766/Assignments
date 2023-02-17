#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1;
    cout<<"Before : "<<endl;
    for (int i = 0; i <= 5; i++)
    {
        m1.insert(i);
    }
    for (auto i : m1)
    {
        cout << i << " ";
    }
    cout<<endl<<"After : "<<endl;
    m1.clear();
    auto it = m1.begin();
    cout<<*it<<endl;
    return 0;
}