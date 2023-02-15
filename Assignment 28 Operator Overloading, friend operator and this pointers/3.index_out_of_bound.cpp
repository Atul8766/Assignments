#include <iostream>
using namespace std;

class Array
{
    private:
    int arr[100];
    const int size = 100;
    public:
    void setData(int value, int index)
    {
        if(index > size)
        {
            cout<<"Array is Out Of Bound Exception"<<endl;
            exit(0);
        }
        arr[index] = value;
    }
    int operator[](int index)
    {
       if(index > size)
        {
            cout<<"Array is Out Of Bound Exception"<<endl;
            exit(0);
        }
        return arr[index];
    }
};

int main()
{
    Array arr;
    arr.setData(5,11);
    cout<<arr[120]<<endl;
    return 0;
}