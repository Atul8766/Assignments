#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1 = {1, 2, 3, 4, 5, 6, 8};
    cout << "First element in list : " << l1.front() << endl;
    cout << "Last element in list : " << l1.back() << endl;
    return 0;
}