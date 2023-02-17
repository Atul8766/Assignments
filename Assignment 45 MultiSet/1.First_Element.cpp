#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1;
    for (int i = 0; i <= 5; i++)
    {
        m1.insert(i);
    }
    auto it = m1.begin();
    cout<<"First Element of multiset : "<<*it<<"\n";
    return 0;
}