#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 9};
    vector<int> arr2 = {1, 5, 9, 7, 2, 6, 4, 9, 3};
    vector<int>::iterator i;
    vector<int>::iterator j;

    for (i = arr1.begin(); i != arr1.end(); i++)
    {
        for (j=arr2.begin(); j!=arr2.end(); j++)
        {
            if(*i==*j)
            {
                cout<<*i<<" ";
            }
        }
    }

    cout<<endl;

    return 0;
}