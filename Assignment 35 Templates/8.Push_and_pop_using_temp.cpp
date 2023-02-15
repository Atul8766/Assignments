#include <iostream>
#include <stack>
using namespace std;

template <class T>

void push (T x)
{
    stack<int> s;
    s.push(x);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}

int main()
{
    push<int>(50);
    cout<<endl;
    return 0;
}