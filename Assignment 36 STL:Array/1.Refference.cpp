#include <iostream>
#include <array>
using namespace std;

int main()
{   
    array<int,5> arr = {1,2,3,4,5};
    cout<<"arr[0] = "<<get<0>(arr)<<endl;
    cout<<"arr[1] = "<<get<1>(arr)<<endl;
    arr.fill(10);   
    array<int,5>::iterator i;
    cout<<"\nAll Elements\n";
    for ( i = arr.begin(); i!=arr.end(); i++)
    {
        cout<<*i<<" ";
    }
    
    return 0;
}