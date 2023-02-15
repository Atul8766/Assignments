#include <iostream>
using namespace std;

int main()
{
    float discount,price;
    cin>>price>>discount;
    cout<<"Final price: "<<(price-(price*discount/100));
    return 0;
}