#include <iostream>
#include <list>
using namespace std;

void show(list<char> l1)
{
    list<char>::iterator i;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}

int main()
{
    list<char> charlt;
    charlt.push_back('a');
    charlt.push_back('b');
    charlt.push_back('c');
    charlt.push_back('d');

    show(charlt);
    return 0;
}