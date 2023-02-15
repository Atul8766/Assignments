#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack1;
    
    for(int i=5; i>=1; i--)
    {
        stack1.push(i);
    }
    stack<int> stack2(stack1);
    
    cout<<"Stack 1 : ";
    while(!stack1.empty())
    {
        cout<<stack1.top()<<" ";
        stack1.pop();
    }
   
    cout<<endl;
    cout<<"Stack 2 : ";
    while(!stack2.empty())
    {
        cout<<stack2.top()<<" ";
        stack2.pop();
    }

    return 0;
}