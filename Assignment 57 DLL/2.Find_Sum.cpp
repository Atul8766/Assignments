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

class LL
{
    node *head;

public:
    LL()
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
            temp->next = t->next;
            t->next = temp;
        }
    }

    void sum(int x)
    {
        node *temp = head;
        node *t = head;
        while (temp != NULL)
        {
            while (t != NULL)
            {
                if (temp->value + t->value == x)
                {
                    cout<<"("<<t->value<<","<<temp->value<<")";
                    cout<<", ";
                }
                t = t->next;
            }
            t = temp;
            temp = temp->next;
        }
    }

    void print()
    {
        node *t = head;
        while (t != NULL)
        {
            cout << t->value << " <-> ";
            t = t->next;
        }
        cout << endl;
    }
};

int main()
{
    LL l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.insert(8);
    l1.insert(9);
    l1.sum(7);
    // l1.print();
    return 0;
}