#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    priority_queue <int ,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(2);
    pq.push(3);
    pq.push(1);
    pq.push(0);
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
