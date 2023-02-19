#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m1;
    m1["one"] = 1;
    m1["two"] = 2;
    m1["three"] = 3;
    m1["four"] = 4;
    m1["five"] = 5;
    
    auto it = m1.begin();
    while(it != m1.end())
    {
        cout<<it->first<<" = "<<it->second<<endl;
        it++;
    }
    return 0;
}