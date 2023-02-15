#include <iostream>
using namespace std;

int main()
{
    char email[40];
    cout << "Enter your email address: " << endl;
    cin.getline(email, 40);
    int i, symbol = 0;
    for (i = 0; email[i]; i++)
    {
        if (email[i] == '@')
        {
            symbol++;
        }
        if ()
        {
        }
    }

    return 0;
}