#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int arr1[] = {5, 6, 8};
    int arr2[] = {4, 7, 8};

    for(auto i : arr1)
    {
        pq.push(i);
    }
    for(auto i : arr2)
    {
        pq.push(i);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}