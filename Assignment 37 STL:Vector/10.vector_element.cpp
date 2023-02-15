#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr;
    if(arr.size())
    {
        cout<<"There is some element in array"<<endl;
    }
    else
    {
        cout<<"There is no element in array "<<endl;
    }
    return 0;
}