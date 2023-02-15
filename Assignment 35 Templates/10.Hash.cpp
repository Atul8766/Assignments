#include <iostream>
#include <map>
using namespace std;

template <class T> 

void table(T key, T value)
{
    map<int,int> m;
    m.insert({key,value});
    map<int,int>::iterator i;
    cout<<"KEY\tELEMENT\n";
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout<<i->first<<"\t"<<i->second<<"\n";
    }
}

int main()
{
    table(8,5);
    return 0;
}