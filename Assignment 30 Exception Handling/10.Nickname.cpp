#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[25];
    int i,digit=0,special=0;
    cout<<"Enter your name:"<<endl;
    cin.getline(name,25);
    for(i=0; name[i]; i++)
    {
        if(name[i]>=48 && name[i]<=57)
        {
            digit++;
        }
        if(name[i]>=21 && name[i]<=47)
        {
            special++;
        }

    }
    try
    {
        if(i>8)
        {
            throw "Please Enter NickName";
        }
        if(digit>0)
        {
            throw "It Contain Digits";
        }
        if(special>0)
        {
            throw "It contain Symbols";
        }
        else
        throw "ok";
    }
    catch(const char* str)
    {
        cout<<str<< '\n';
    }
    
    return 0;
}