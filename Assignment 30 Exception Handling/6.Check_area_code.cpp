#include <iostream>
using namespace std;

int main()
{
    long int a_code;
    int count=0;
    cout<<"Please Enter Your Area Code: "<<endl;
    cin>>a_code;
    while(a_code)
    {
        int k = a_code%10;
        count++;
        a_code = a_code/10;
    }
    try
    {
        if(count==6)
        {
            throw "Correct Area Code";
        }
        else
        {
            throw "Please Enter Only 6 Digit";
        }
    }
    catch (const char* msg)
    {
        cout<<msg<<endl;
    }
    catch(...)
    {
        cout<<"Default Exception"<<endl;
    }
    return 0;
}