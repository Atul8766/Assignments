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
    if (m1.empty())
    {
        cout << "Set is empty \n";
    }
    else
    {
        cout << "Set is not empty \n";
    }
    return 0;
}