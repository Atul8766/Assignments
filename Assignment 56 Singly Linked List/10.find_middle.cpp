#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
    public:
    int value;
    node *next;

    node()
    {
        value = 0;
        next = NULL;
    }
};

class LinkedList
{
    node *head;
    public:
    LinkedList()
    {
        head = NULL;
    }

    void insert(int v)
    {
        node *temp  = new node();
        temp->value = v;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while(t->next!=NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }
    int size()
    {
        node *t = head;
        int count = 0;
        while(t!=NULL)
        {
            t = t->next;
            count++;
        }
        return count;
    }
    void middle()
    {
        node *temp = head;
        int n = size()/2;
        while(temp!=NULL && n)
        {
            temp = temp->next;
            n--;
        }
        cout<<temp->value;
    }


};


int main()
{
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    
    cout<<"Middle Element is : ";
    l1.middle();
    cout<<"\n";
    return 0;
}