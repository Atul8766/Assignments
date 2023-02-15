#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 5, 6};
    cout << "Enter First Element : ";
    int num1;
    cin >> num1;
    l1.insert(l1.begin(), num1);
    cout << "Enter Last Element : ";
    int num2;
    cin >> num2;
    l1.insert(l1.end(), num2);

    list<int>::iterator i;

    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}