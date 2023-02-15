#include <iostream>
#include<math.h>
using namespace std;

class Area
{
    public:
    float result;
    public:
    Area(){}
    // rectangle = x*y and for triangle = 1/2*(l*b)
    Area(float l, float b)
    {
        result = l*b;
    }
    Area (float r)
    {
        result = M_PI*r*r;
    }
    float show_Data()
    {
        return result;
    }
};


int main()
{
    int choice;
    system("clear");
    while(true)
    {
        
        cout<<"\n\n1. Area of Rectangle"<<endl;
        cout<<"2. Area of Triangle"<<endl;
        cout<<"3. Area of Circle"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"\n---------------------------------"<<endl;
        cout<<"\nEnter Your Choice : "<<endl;

        
        cin>>choice;
        switch (choice)
        {
        case 1:{ 
                    float l,b;
                    cout<<"Enter Length : ";
                    cin>>l;
                    cout<<"Enter Width : ";
                    cin>>b;
                    Area a(l,b);
                    cout<<"\nArea of Rectangle is : "<<a.show_Data();
                    break;
               }
        case 2: {
                    float r;
                    cout<<"Enter Radius of Circle : ";
                    cin>>r;
                    Area c(r);
                    cout<<"\nArea of circle is "<<c.show_Data()<<" having radius is "<<r;
                    break;
                }
        case 3: {
                float l,b,result;
                cout<<"Enter Length : ";
                cin>>l;
                cout<<"Enter Width : ";
                cin>>b;
                Area a(l,b);
                result = a.show_Data();
                cout<<"\nArea of Triangle is : "<<result/2;
                break;
                } 
        case 4: exit(0);
        default:
                cout<<"Invalid Choice....."<<endl;  
        }
    }
    return 0;
}