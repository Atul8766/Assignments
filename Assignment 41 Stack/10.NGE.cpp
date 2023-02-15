#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int arr[] = {4,5,2,25};
    stack<int> s1;
    for(int i=0; i<=3; i++)
    {
        s1.push(arr[i]);
    }
    for(int i=0; i<4; i++)
    {
      while(!s1.empty())
      {
        if(s1.top()>arr[i])
        {
            cout<<arr[i]<<" -> "<<s1.top()<<endl;
            break;
        }
        s1.pop();
      }
    }   
    return 0;
}