#include <iostream>
#include <queue>
using namespace std;


int main()
{
    queue<int> q1;
    q1.push(4);
    system("clear");
    if(!q1.size())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}