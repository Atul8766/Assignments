#include <iostream>
#include <cstdlib>
using namespace std;

class node
{
public:
    int value = 0;
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
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
        }
    }

    void swap()
    {
        node *temp = head;
        node *t = head;
        t = t->next;
        while(t!=NULL && temp!=NULL){
        int store = temp->value;
        temp->value = t->value;
        t->value = store;
        t = t->next->next;
        temp = temp->next->next;
        }
    }

    void print()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << " -> ";
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
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.insert(7);
    l1.swap();
    l1.print();
    return 0;
}