#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;


int sum(forward_list<int> l1)
{
    int sum=0;
    forward_list<int>::iterator i;

    for(i=l1.begin(); i!=l1.end(); i++)
    {
        sum = sum+(*i);
    }

    return sum;
}


int main()
{
    forward_list<int> l1 = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum is : "<<sum(l1)<<endl;
    return 0;
}


