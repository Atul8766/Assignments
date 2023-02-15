#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[25];
    int i,digit=0,special=0,uppercase=0;
    cout<<"Enter your Password:"<<endl;
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
        if(name[i]>=65 && name[i]<=90)
        {
            uppercase++;
        }

    }
    try
    {
        if(i<6)
        {
            throw "Please Enter More than 6 characters";
        }
        if(digit<=0)
        {
            throw "Please contain at least one digit";
        }
        if(special<=0)
        {
            throw "Please contain at least one special character";
        }
        if(uppercase<=0)
        {
            throw "Please contain at least one Capital Letter";
        }
        else
        throw "Password Set Successfully";
    }
    catch(const char* str)
    {
        cout<<str<< '\n';
    }
    
    return 0;
}