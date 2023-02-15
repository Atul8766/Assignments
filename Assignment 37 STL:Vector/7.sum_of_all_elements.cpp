#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    vector<int>::iterator i;
    int sum =0;
    for(i=arr.begin(); i!=arr.end(); i++)
    {
        sum = sum+(*i);
    }
    cout<<"Sum of all Element is : "<<sum<<"\n";
    return 0;
}