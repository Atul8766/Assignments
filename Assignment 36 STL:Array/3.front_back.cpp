#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,6> arr = {1,2,3,4,56,9}; 
    cout<<"First Element in array : "<<arr.front()<<endl;
    cout<<"Last Element in array : "<<arr.back()<<endl;
    return 0;
}