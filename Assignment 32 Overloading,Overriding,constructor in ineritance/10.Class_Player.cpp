#include <iostream>
using namespace std;

class Player
{
    private:
    int player_no;
    string name;
    int store;
    int  *no_of_matches = new int(store);
    int no_of_goals;
    public:
    Player()
    {
        cout<<"\nEnter Player No : ";
        cin>>player_no;
        cin.ignore();
        cout<<"\nEnter Player Name : ";
        getline(cin,name);
        cout<<"\nEnter No. of Matches : ";
        cin>>store;
        ;
        for (int i = 1; i <= store ; i++)
        {
            cout<<"\nEnter No. of Goals in Match "<<i<<" : ";
            cin>>no_of_goals;
            no_of_matches [i] = no_of_goals; 
        }
        
    }
    void display()
    {
        cout<<"\n-----------------------------------------"<<endl;
        cout<<"Player No : "<<player_no<<endl;
        cout<<"Player Name : "<<name<<endl;
        cout<<"No. of Matches Played : "<<store<<endl;
        for(int i=1; i<=store; i++)
        {
            cout<<"Match "<<i<<" Golas "<<no_of_matches[i]<<endl;
        }
    }
};


int main()
{
    Player p;
    p.display();
    return 0;
}