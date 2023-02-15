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
        next  = NULL;
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

    void push(int v)
    {
        node *temp = new node();
        temp->value = v;
        if(head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }
    int top()
    {
        node *t = head;
        return t->value;
    }

    void pop()
    {
        node *t = head;
        head = head->next;
        delete (t);
    }

    bool isEmpty()
    {
        if(head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int size()
    {
        node *t = head;
        int count = 0;
        while (t!=NULL)
        {
            t = t->next;
            count++;
        }
        return count;
    }

    void print()
    {
        node *t = head;
        while (t!=NULL)
        {
            cout<<t->value<<" -> ";
            t = t->next;
        }
        cout<<endl;
    }
};



int main()
{
    LinkedList l1;
    l1.push(5);
    l1.push(10);
    l1.push(15);
    l1.push(20);
    l1.push(25);
    l1.pop();
    l1.pop();
    l1.print();
    int size = l1.size();
    cout<<"Size of Linked List is : "<<size;
    if(l1.isEmpty())
    {
        cout<<"\n Linked List is empty"<<endl;
    }
    else
    {
        cout<<"\nLinked List is not empty"<<endl;
    }
    return 0;
}
