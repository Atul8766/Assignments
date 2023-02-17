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
    cout<<"First Element of multiset : "<<m1.max_size()<<"\n";
    return 0;
}