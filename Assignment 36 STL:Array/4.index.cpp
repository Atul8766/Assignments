#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,6> arr = {1,2,3,4,5,6};
    cout<<"arr[0] = "<<get<0>(arr)<<endl;
    cout<<"arr[1] = "<<get<1>(arr)<<endl;
    cout<<"arr[2] = "<<get<2>(arr)<<endl;
    cout<<"arr[3] = "<<get<3>(arr)<<endl;
    cout<<"arr[4] = "<<get<4>(arr)<<endl;
    cout<<"arr[5] = "<<get<5>(arr)<<endl;
    return 0;
}