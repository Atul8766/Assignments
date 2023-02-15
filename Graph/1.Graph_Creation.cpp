#include <iostream>
using namespace std;

int main()
{
    int u, v, vertex, edge, directed = 1;
    cout << "Enter Number of Vertex : ";
    cin >> vertex;
    int matrix[vertex][vertex];
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            matrix[i][j] = 0;
        }
    }
    cout << "\nEnter Number of Edge : ";
    cin >> edge;

    cout << "Enter 1 for Directed graph and 0 for Undirected Graph : ";
    cin >> directed;
    for (int i = 1; i <= edge; i++)
    {
        cout << "Enter Source and destination of " << i << " Edge" << endl;
        cin >> u >> v;

        if (u <= vertex && v <= vertex)
        {
            matrix[u - 1][v - 1] = 1;
            if (directed == 0)
            {
                matrix[v - 1][u - 1] = 1;
            }
        }
        else
            cout << "Invalid Edge" << endl;
    }

    cout << "\n\n";
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}