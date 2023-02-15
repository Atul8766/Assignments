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

            while (t->next != NULL)
            {
                if (temp->value < head->value)
                {
                    int store = head->value;
                    head->value = temp->value;
                    temp->value = store;
                }
                else if (temp->value < t->value)
                {
                    int store = t->value;
                    t->value = temp->value;
                    temp->value = store;
                }
                t = t->next;
            }
        }
    }

    void duplicate()
    {
        node *temp = head;
        node *t = head;
        t = t->next;
        cout<<head->value<<" -> ";
        while (t != NULL && temp != NULL)
        {
           if(temp->value != t->value)
           {
                cout<<temp->value<<" -> ";
           }
           temp = temp->next;
        }
    }

    void print()
    {
        cout << endl;
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << "->";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList l1;
    l1.insert(11);
    l1.insert(11);
    l1.insert(11);
    l1.insert(21);
    l1.insert(43);
    l1.insert(60);
    l1.duplicate();
    // l1.print();q
    cout << endl;
    return 0;
}