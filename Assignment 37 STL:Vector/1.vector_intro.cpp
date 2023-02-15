#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5,6,9};
    vector<int>::iterator i;
    for ( i = v.begin(); i!= v.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    return 0;
}