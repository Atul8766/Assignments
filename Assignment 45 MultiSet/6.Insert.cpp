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
    for (auto i : m1)
    {
        cout << i << " ";
    }
    return 0;
}