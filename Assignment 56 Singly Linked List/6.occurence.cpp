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
        node *temp = new node();
        temp->value =v;

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
            t->next =temp;
        }
    }

    void occurence(int v)
    {
        node *temp  = head;
        int count = 0;
        while(temp != NULL)
        {
            if(temp->value == v)
            {
                count++;
            } 
            temp = temp->next;
        }
        cout<<"Occurence of "<<v<<" is "<<count<<endl;
    }

    void print()
    {
        node *t = head;
        while(t!=NULL)
        {
            cout<<t->value<<" -> ";
            t = t->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(1);
    l1.insert(2);
    l1.insert(1);
    l1.insert(3);
    l1.insert(1);
    // l1.print();
    l1.occurence(1);

    return 0;
}