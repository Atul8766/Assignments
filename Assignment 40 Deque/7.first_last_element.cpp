#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {1,2,3,4,5,6,8};
    cout<<"First Element : "<<d.front()<<endl;
    cout<<"Second Element : "<<d.back()<<endl;
    return 0;
}
