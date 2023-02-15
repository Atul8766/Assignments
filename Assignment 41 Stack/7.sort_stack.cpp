#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main()
{
    stack<int> s1;
    int arr[5];
    s1.push(78);
    s1.push(85);
    s1.push(39);
    s1.push(100);
    s1.push(21);
    int i =0;
    while(!s1.empty())
    {
        arr[i] = s1.top();
        s1.pop();
        i++;   
    }
    for(i = 0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}