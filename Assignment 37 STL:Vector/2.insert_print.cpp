#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr;
    arr.insert(arr.begin(),10);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);   
    arr.push_back(2);
    arr.push_back(1);
    vector<int>::iterator i;

    for(i=arr.begin(); i!=arr.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}