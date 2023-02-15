#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> ticket;
 
    ticket.push("Person 1 ");
    ticket.push("Person 2 ");
    ticket.push("Person 3 ");
    ticket.push("Person 4 ");
    ticket.push("Person 5 ");
    int i=1;
    while(!ticket.empty())
    {
        cout<<"Ticket : "<<i<<" -> : "<<ticket.front()<<endl;
        i++;
        ticket.pop();
    }
    return 0;
}