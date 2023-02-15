#include <iostream>
#include <queue>
using namespace std;


int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(1);
    pq.push(2);
    pq.push(8);
    pq.push(9);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}