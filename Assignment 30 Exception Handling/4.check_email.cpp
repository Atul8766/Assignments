#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[40];
    int i;
    cout<<"Enter your E-mail Address: "<<endl;
    fgets(str,40,stdin);
    try
    {
    for(i=0; i<=39; i++)
    {
        if(str[i]=='@')
        {
            break;
        }
    }
    if(i==16)
    {
        throw "Please include @ in your E-mail";
    }
    else 
    {
        cout<<"E-mail id is correct";
    }
    }
    catch (const char* str)
    {
        cout<<str<<endl;
    }

    return 0;
}