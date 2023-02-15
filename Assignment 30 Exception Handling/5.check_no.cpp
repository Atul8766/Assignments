#include <iostream>
using namespace std;

int main()
{
    long int m_num;
    int count=0;
    cout<<"Please Enter your Mobile number: "<<endl;
    cin>>m_num;
    while(m_num)
    {
        int k = m_num%10;
        count++;
        m_num = m_num/10;
    }
    try
    {
        if(count==10)
        {
            throw "Correct Phone Number";
        }
        else
        {
            throw "Please Enter Only 10 Digit phone number";
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