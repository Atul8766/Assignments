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
        head == NULL;
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
            //move to last node
            while(t->next != NULL)
            {
                t=t->next;
            }
            t->next = temp;
        }
    }

    void insertAtBegin(int v)
    {
        node *temp = new node();
        temp->value=v;
        temp->next=head;
        head=temp;
    }

    void insertAtMiddle(int v,int n)
    {
        node *temp = new node();
        temp->value=v;
        node *t = head;
        if(n == 1)
        {
            temp->next=head;
            head=temp;
        }
        else
        {
            while (n>1)
            {
                n--;
                if(t->next!=NULL)
                {
                    t = t->next;
                }
                else
                {
                    cout<<"Position does'nt exist"<<endl;
                    return;
                }
            }
            temp->next=t->next;
            t->next=temp;
        }
    }

    void deleteAtMiddle(int n)
    {
        node *temp = head;
        if(n==1)
        {
            head = head->next;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
        }
        else
        {
            while(n>2)
            {
                n--;
                
                if(temp->next->next != NULL)
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

    void search(int v)
    {
        node *t = head;
        int count = 0;
        if(head == NULL)
        {
            cout<<"Linked List is empty"<<endl;
        }
        else
        {
            while (t!=NULL)
            {  
                count++;
                if(t->value == v)
                {
                    cout<<"Value Found at "<<count<<endl;
                    return;
                }
                t = t->next;
            }

            cout<<"Value not found "<<endl;
        }
    }



    void print()
    {
        node *t = head;

        while(t!=NULL)
        {
            cout<<t->value<<" -> ";
            t=t->next;
        }
    }
};


int main()
{
    system("clear");
    LinkedList l1;
    int choice;
    while(1){
    cout<<"\n\n==========================================================\n\n";
    cout<<"1. Insert At Begin "<<endl;
    cout<<"2. Insert At Middle"<<endl;
    cout<<"3. Insert At the End"<<endl;
    cout<<"4. Delete at which position"<<endl;
    cout<<"5. Search"<<endl;
    cout<<"6. Print"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    int value,position;
    switch (choice)
    {
    case 1: cout<<"Enter the element : ";
            cin>>value;
            l1.insertAtBegin(value);
            cout<<endl;
            break;
    case 2: cout<<"Enter the element and position : ";
            cin>>value>>position;
            l1.insertAtMiddle(value,position);
            cout<<endl;
            break;
    case 3: cout<<"Enter the element : ";
            cin>>value;
            l1.insertAtEnd(value);
            cout<<endl;
            break;
    case 4: cout<<"Enter Position where to delete : ";
            cin>>position;
            l1.deleteAtMiddle(position);
            cout<<endl;
            break;
    case 5: cout<<"Enter value to be search : ";
            cin>>value;
            l1.search(value);
            cout<<endl;
            break;
    case 6: l1.print();
            cout<<endl;
            break;
    case 7:cout<<"Thanks For Using the software"<<endl;
           exit(0); 
    }
    }

  

    return 0;
}