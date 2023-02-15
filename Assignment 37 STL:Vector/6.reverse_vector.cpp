#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    for(int i=arr.size()-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

