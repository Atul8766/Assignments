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
    void insertAtEnd(int v)
    {
        node *temp = new node();
        temp->value = v;
        if(head==NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next !=NULL)
            {
                t = t->next;
            }
            t->next=temp;
        }   
    }

    void search(int v)
    {
        node *temp = head;

        if(head==NULL)
        {
            cout<<"Linked List is Empty"<<endl;
        }
        while(temp!=NULL)
        {
            if(temp->value == v)
            {
                cout<<endl<<"Yes"<<endl;
                return;
            }
            temp = temp->next;
        }
        cout<<"No"<<endl;
    }

    void print()
    {
        node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->value<<" -> ";
            temp = temp->next;
        }
    }
};


int main()
{
    LinkedList l1;
    l1.insertAtEnd(14);
    l1.insertAtEnd(21);
    l1.insertAtEnd(11);
    l1.insertAtEnd(30);
    l1.insertAtEnd(10);
    l1.print();
    l1.search(11);
    return 0;
}