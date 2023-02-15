#include <iostream>
using namespace std;

int min();

const int MAX = 20;
const int INFNITY = 9999;
const int PERM = 1;
const int NIL = -1;
const int TEMP = 0;

int adj[MAX][MAX];
int predecessor[MAX];
int pathLength[MAX];
int status[MAX];
int n;

void create_graph()
{
    int i, max_edges, origin, destin, wt, directed = 1;

    cout << "Enter 1 For Directed and 0 For Undirected : ";
    cin >> directed;

    cout << "Enter Number of Vertex : ";
    cin >> n;

    max_edges = n * (n - 1); // for directed graph
    for (i = 1; i <= max_edges; i++)
    {
        cout << "Enter Edge " << i << " (-1,-1) to quit : ";
        cin >> origin >> destin;
        if (origin == -1 && destin == -1)
            break;
        cout << "Enter Weight For The " << i << " edge : ";
        cin >> wt;

        if (origin >= n || destin >= n || origin < 0 || destin < 0)
        {
            cout << "Invalid Edge \n";
            i--;
        }
        else
        {
            adj[origin][destin] = wt;
            if (directed == 0)
                adj[destin][origin] = wt;
        }
    }
}

void dijkstra(int s)
{
    int i, current;

    for (i = 0; i < n; i++)
    {
        predecessor[i] = NIL;
        pathLength[i] = INFNITY;
        status[i] = TEMP;
    }

    pathLength[s] = 0;

    while (true)
    {
        current = min();
        if (current == NIL)
            return;
        status[current] = PERM;

        for (i = 0; i < n; i++)
        {
            if (adj[current][i] != 0 && status[i] == TEMP)
            {
                if (pathLength[current] + adj[current][i] < pathLength[i])
                {
                    predecessor[i] = current;
                    pathLength[i] = pathLength[current] + adj[current][i];
                }
            }
        }
    }
}

void findpath(int s, int v)
{
    int i, u;
    int path[MAX];
    int shortDist = 0;
    int count = 0;

    while (v != s)
    {
        count++;
        path[count] = v;
        u = predecessor[v];
        shortDist += adj[u][v];
        v = u;
    }
    count++;
    path[count] = s;
    cout << "Shortest Path is :";
    for (i = count; i >= 1; i--)
    {
        cout << path[i] << " -> ";
    }
    cout << "\nShortest Path is : " << shortDist << endl;
}

void display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", adj[i][j]);
        }
        cout << "\n";
    }
}

int min()
{
    int i;
    int min = INFNITY;
    int k = NIL;

    for (i = 0; i < n; i++)
    {
        if (status[i] == TEMP && pathLength[i] < min)
        {
            min = pathLength[i];
            k = i;
        }
    }
    return k;
}

int main()
{
    int s, v;
    create_graph();
    display();
    cout << "Enter source Vertex\n";
    cin >> s;
    dijkstra(s);

    while (true)
    {
        cout << "Enter Destination vertex (-1 to quit) : ";
        cin >> v;
        if (v == -1)
            break;
        if (v < 0 || v >= n)
            cout << "This vertex does not exist \n";
        else if (v == s)
            cout << "Source and Destination vertices are same\n";
        else if (pathLength[v] == INFNITY)
            cout << "There is no path from source to destination vertex\n";
        else
            findpath(s, v);
    }

    return 0;
}