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

class DLL
{
    node *head;
    public:
    DLL()
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
        }
        else
        {
            node *t = head;
            while(t->next!=NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }

    void insertAtBegin(int v)
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
            head->prev = temp;
            head = temp;
        }
    }

    void insertInMiddle(int v,int n)
    {
        node *temp = new node();
        temp->value = v;
        node *t = head;
        if(n==0 && head==NULL)
        {
           this->insertAtBegin(v);
           return;
        }
        if(head == NULL && n>1)
        {
            cout<<"Position Not Found"<<endl;
            return;
        }
        else
        {
            
            while(n>1)
            {
                n--;
                if(t->next == NULL)
                {
                    cout<<"Position Not Found"<<endl;
                    break;
                }
                else{
                t = t->next;
                }
            }
            temp->next = t->next;
            temp->prev = t;
            if(t->next != NULL)
                t->next->prev = temp;
            t->next = temp;
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
        if(n==1 || n==0)
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

    void search(int v)
    {
        node *t = head;
        int count = 1;
        while(t!=NULL)
        {
            if(t->value == v)
            {
                cout<<"Value found at "<<count<<" index"<<endl;
                return;
            }
            count++;
            t = t->next;
        }
        cout<<"Value not Found"<<endl;
    }

    void printRev()
    {
          node *t = head;
        while(t->next!=NULL)
        {
            t = t->next;
        }
        // node *temp = t;
        while(t!=NULL)
        {
            cout<<t->value<<" <=> ";
            t = t->prev;
        }
        cout<<"\n";
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
    DLL l1;
    l1.insertAtEnd(1);
    l1.insertAtEnd(2);
    l1.insertAtEnd(3);
    l1.insertAtEnd(4);
    l1.insertAtEnd(5);
    l1.insertAtEnd(6);
    l1.del(1);
    l1.print();
    return 0;
}