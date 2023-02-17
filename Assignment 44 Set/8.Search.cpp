#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1;
    for(int i=1; i<=5; i++)
    {
        s1.insert(i);
    }
    int element;
    cout<<"Enter Element you want to search : ";
    cin>>element;
    auto it = s1.find(element);
    if(element == (*it))
    {
        cout<<"Element Found"<<endl;
    }
    else
    {
        cout<<"Element Not Found"<<endl;
    }
    
    return 0;
}
