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

class CSLL
{
    node *head;

public:
    CSLL()
    {
        head = NULL;
    }

    void insertAtEnd(int v)
    {
        node *temp = new node();
        temp->value = v;

        if (head == NULL)
        {
            head = temp;
            head->next = head;
            return;
        }
        else
        {
            node *t = head;
            while (t->next != head)
            {
                t = t->next;
            }

            t->next = temp;
            temp->next = head;
        }
    }

    void insertAtBegin(int v)
    {
        node *temp = new node();
        temp->value = v;

        temp->next = head;
        node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        last->next = temp;
        head = temp;
    }

    void del(int n)
    {
        node *temp = head;
        if (n == 1)
        {
            node *last = head;
            while(last->next != head)
            {
                last = last->next;
            }
            last->next = temp->next;
            head = temp->next;
            delete temp;
        }
        else
        {
            // temp = temp->next->next;
            // cout<<temp->value<<endl;

            while(n>2)
            {
                n--;
                
                if(temp->next->next != head)
                {
                    temp = temp->next;
                }
                else
                {
                    cout<<"Position Does'nt Exist"<<endl;
                    return;
                }
            }
            node *t = temp->next;
            temp->next = t->next;
            cout<<t->value<<" deleted"<<endl;
            delete t;
        }
    }

    void print()
    {
        node *t = head;
        while (t->next != head)
        {
            cout << t->value << " -> ";
            t = t->next;
        }
        cout << t->value;
        cout << endl;
    }
};

int main()
{
    CSLL l1;
    l1.insertAtEnd(1);
    l1.insertAtEnd(2);
    l1.insertAtEnd(3);
    // l1.del(1);
    // l1.del(1);
    l1.del(3);
    l1.print();
    return 0;
}