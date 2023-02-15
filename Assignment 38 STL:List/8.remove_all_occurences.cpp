#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void show(list<int> l1)
{
    list<int>::iterator i;
    for (i = l1.begin(); i != l1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
bool is_div_2(const int &num) { return num % 2 == 0; }
int main()
{
    list<int> l1 = {1, 2, 3, 4, 5, 6, 9, 7, 9};
    list<int> l2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    l1.remove(9);
    show(l1);
    list<int>::iterator i;
    l2.remove_if(is_div_2);
    show(l2);

    return 0;
}