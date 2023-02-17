#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1;
    // for (int i = 0; i <= 5; i++)
    // {
    //     m1.insert(i);
    // }
    m1.insert(1);
    m1.insert(2);
    m1.insert(10);
    auto it = m1.end();
    cout<<"Last Elemet of multiset : "<<*it<<"\n";
    return 0;
}