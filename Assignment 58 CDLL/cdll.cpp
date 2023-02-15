#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
    public:
    int value;
    node *next;
    node *prev;

    node()
    {
        value = 0;
        next = NULL;
        prev = NULL;
    }
};

class CLL
{
    node *head;

    public:
    CLL()
    {
        head = NULL;
    }
    void insertAtEnd(int v)
    {
        node *temp = new node();
        temp->value = v;
        if(head == NULL)
        {
            head = temp;
            temp->next = head;
            temp->prev = head;
            return;
        }
        else
        {
           temp->next = head;
           temp->prev = head->prev;
           head->prev->next = temp;
           head->prev = temp;
        }
    }
    void insertAtBegin(int v)
    {
        node *temp = new node();
        temp->value = v;
        if(head == NULL)
        {
            head = temp;
            temp->next = head;
            temp->prev = head;
            return;
        }
        else
        {
            temp->next = head;
            temp->prev = head->prev;
            head = temp;
            temp->next->prev = temp;
            temp->prev->next = temp;
        }
    }

    void del(int n)
    {
        node *temp = head;
        if(head == NULL)
        {
            cout<<"Linked List Empty"<<endl;
            return;
        }
        if(n==1)
        {
            head = temp->next;
            head->prev = temp->prev;
            temp->prev->next = head;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
            return;
        }
        else
        {
            while(n>1)
            {
                n--;
                if(temp->next == NULL)
                {
                    cout<<"Position Not Found"<<endl;
                    return;
                }
                temp = temp->next;
            }

            temp->prev->next = temp->next;
            if(temp->next != NULL)
                temp->next->prev = temp->prev;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
        }
    }
    

    void print()
    {
        node *t = head;
        while(t->next!=head)
        { 
            cout<<t->value<<" <=> ";
            t = t->next;
        }
        cout<<t->value<<"\n";
    }
};


int main()
{
    CLL l1;
    l1.insertAtEnd(1);
    l1.insertAtEnd(2);
    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(5);
    l1.insertAtEnd(6);
    l1.insertAtBegin(0);
    l1.del(1);
    l1.del(6);
    l1.print();
    return 0;
}