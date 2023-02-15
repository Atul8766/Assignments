#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq1;
    priority_queue<int> pq2;
    priority_queue<int> pq3;
    pq1.push(1);
    pq1.push(2);
    pq1.push(4);
    pq1.push(8);
    pq1.push(6);
    
    pq2.push(6);
    pq2.push(8);
    pq2.push(7);
    pq2.push(4);
    pq2.push(9);
    

    while(!pq1.empty())
    {
        pq3.push(pq1.top());
        pq1.pop();
    }

    while(!pq2.empty())
    {
        pq1.push(pq2.top());
        pq2.pop();
    }

    while(!pq3.empty())
    {
        pq2.push(pq3.top());
        pq3.pop();
    }

    cout<<"Prioruty Queue 1 : ";
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<"\nPrioruty Queue 2 : ";
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
 
    

    return 0;
}