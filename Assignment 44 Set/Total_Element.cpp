#include <iostream>
using namespace std;
#include <set>

int main()
{
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    cout<<s1.size();
    return 0;
}
