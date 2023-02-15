#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5,6,9};
    int ans = 0;
    vector<int>::iterator i;
    for(i=arr.begin(); i!=arr.end(); i++)
    {
        if(*i>ans)
        {
            ans = *i;
        }
    }
    cout<<"Largest Element : "<<ans<<endl;
    int ans1 = arr[0];
    for(i=arr.begin(); i!=arr.end(); i++)
    {
        if(*i<ans1)
        {
            ans1 = *i;
        }
    }
    cout<<"Smallest Element : "<<ans1<<endl;
    return EXIT_SUCCESS;
}