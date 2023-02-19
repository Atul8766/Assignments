#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m1 = {1, 2, 3};
    multiset<int> m2 = {1, 2, 3};
    int count = 0;
    for (auto i : m1)
    {
        for (auto j : m2)
        {
            if (i == j)
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "Multisets are not equal" << endl;
            return 1;
        }
    }
    cout << "MultiSets are equal" << endl;
    return 0;
}