#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[100];
    int top;

public:
Stack()
{
    top = -1;
}
~Stack()
{
    top = -1;
}
int push(int value)
{
    if(isFullStack())
    {
        cout<<"Stack Overflow"<<endl;
        return -1;
    }
    else
    {
    arr[++top] = value;
    return 0;
    }
}
int pop()
{
    if(isStackEmpty())
    {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else{
     top--;
     return 0;
    }
}
int size()
{
    return (top+1);
}
int isStackEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFullStack()
{
    if(top == 99)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int topp()
{
    if(isStackEmpty())
    {
        return -1;
    }
    else
    {
    return arr[top];
    }
}

};

int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.pop();
    cout<<s.topp()<<endl;
    cout<<s.size();   
    return 0;
}