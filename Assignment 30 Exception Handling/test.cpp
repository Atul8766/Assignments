#include <iostream> 
using namespace std;

int main()
{
    int num1=5;
    char ch;
    if(typeid(num1).name())
    {
        cout<<"character";
    }

    cout<<num1;
    return 0;
}