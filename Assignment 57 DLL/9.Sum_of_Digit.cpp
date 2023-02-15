#include <iostream>
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

            t->next = temp;
            temp->prev = t;
        }
    }

    void sumofdigit()
    {
        node *temp = head;
        int count = 0, sum = 0, k,value;
        while (temp!= NULL)
        {
            count++;
            value = temp->value;
            while(value)
            {
                k = value % 10;
                sum = sum + k;
                value = value / 10;
            }
            if(sum%2!=0)
            {
                cout<<temp->value<<" <=> ";
            }
            temp = temp->next;
            sum = 0;
            k = 0;
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
            head->prev = NULL;
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
        while(t!=NULL)
        {
            cout<<t->value<<" <=> ";
            t = t->next;
        }
        cout<<"\n";
    }
};


int main()
{
    LL l1;
    l1.insert(5);
    l1.insert(3);
    l1.insert(4);
    l1.insert(2);
    l1.insert(9);
    l1.sumofdigit();
    // l1.print();
    return 0;
}