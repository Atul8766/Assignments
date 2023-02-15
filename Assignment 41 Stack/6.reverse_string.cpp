#include <iostream>
#include <stack>
using namespace std;


int main()
{
    char str[] = "i love to code ";
    string store;
    stack<string> s1;
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]==' ')
        {
            s1.push(" ");
            store.clear();
        }
        else{
        store = str[i];
        s1.push(store);
        }
    }
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }

    return 0;
}