#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    if(s1.empty())
    {
        for (int i=0; i<5; i++)
        {
            s1.insert(i);
        }
    }
    else
    {
        cout<<"Set is not empty"<<endl;
    }

    for(auto i : s1)
    {
        cout<<i<<" ";
    }
    return 0;
}