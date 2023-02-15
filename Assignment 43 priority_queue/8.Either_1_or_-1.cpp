#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {3, 5, 2, 7};
    priority_queue<int> pq;

    for (auto i : arr)
    {
        pq.push(i);
    }

    while (!pq.empty())
    {
        int num1 = pq.top();
        pq.pop();
        if (pq.size() == 1)
            break;
        int num2 = pq.top();
        pq.pop();
        if (num1 != num2)
        {
            int num3 = num1 - num2;
            pq.push(num3);
        }
        if (pq.size() == 1)
            break;
    }
    if (pq.empty())
    {
        cout << "-1";
    }
    else
        cout << pq.top() << endl;
    return 0;
}