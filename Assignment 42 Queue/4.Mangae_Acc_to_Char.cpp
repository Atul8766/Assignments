#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    queue<char> store,store1;
    // a,b,c,d,e
    store.push('e');
    store.push('d');
    store.push('c');
    store.push('b');
    store.push('a');

    while(!store.empty())
    {
        
    }

    while(!store1.empty())
    {
        cout<<store1.front()<<" ";
        store1.pop();
    }


    return 0;
}
