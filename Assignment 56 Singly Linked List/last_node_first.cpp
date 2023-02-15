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
        }
    }

    void move()
    {
        node *temp = head;
        node *t = new node();

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        t->value = temp->value;
        t->next = head;
        head = t;
        node *del = head;

        while(del->next->next != NULL)
        {
            del = del->next;
        }
        delete (del->next);
        del->next = NULL;
    }

    void print()
    {
        node *t = head;

        while (t != NULL)
        {
            cout << t->value << " -> ";
            t = t->next;
        }
        cout << "NULL" << endl;
    }
};

    int main()
    {
        LinkedList l1;
        l1.insert(3);
        l1.insert(8);
        l1.insert(1);
        l1.insert(5);
        l1.insert(7);
        l1.insert(12);
        l1.move();
        l1.print();
        return 0;
    }