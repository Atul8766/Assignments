#include <iostream>
#include <deque>
#include <iterator>
using namespace std;


int main()
{
    deque<string> s1 = {"Learn" ,"on" ,"iNeuron"};
    deque<string> s2 = {"Learn", "iNeuron"};
    string missing;
    deque<string>::iterator i = s1.begin();
    deque<string>::iterator j = s2.begin();

    while(i!=s1.end() )
    {
        cout<<*i<<" ";
    }
    return 0;
}