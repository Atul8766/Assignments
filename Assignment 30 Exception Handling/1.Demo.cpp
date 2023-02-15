#include <iostream>
using namespace std;

int main()
{
    int num1,num2,result;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    try
    {
        if(num2==0)
        throw num2;
        if(num1>=65 || num1<=90)
        throw "Please Enter Only Numbers";
        else
        result = num1/num2;
    }
    catch(const char * str)
    {
        cout<<str<<endl;
    }
    catch(int x)
    {
        cout<<"Zero Divison Error"<<endl;
    }
    
    cout<<"Result is "<<result<<endl;
    

    return 0;
}