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
int length[MAX];
int status[MAX];
int n;

class edge
{
public:
    int u, v;
};

void create_graph()
{
    int i, max_edges, origin, destin, wt;

    cout << "Enter Total No of vertex : ";
    cin >> n;
    max_edges = n * (n - 1) / 2; // for undirected graph

    for (i = 1; i <= max_edges; i++)
    {
        cout << "Enter Edge " << i << " ( -1 -1 ) to quit : ";
        cin >> origin >> destin;
        if (origin == -1 && destin == -1)
            break;
        cout << "Enter Weight for " << i << " edge : ";
        cin >> wt;
        if (origin >= n || destin >= n || origin < 0 || destin < 0)
        {
            cout << "Invalid Edge" << endl;
            i--;
        }
        else
        {
            adj[origin][destin] = wt;
            adj[destin][origin] = wt;
        }
    }
}

void display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf(" %4d ", adj[i][j]);
        }
        cout << "\n";
    }
}

void maketree(int r, edge tree[MAX])
{
    int current, i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        predecessor[i] = NIL;
        length[i] = INFNITY;
        status[i] = TEMP;
    }

    length[r] = 0;

    while (true)
    {
        current = min();
        if (current == NIL)
        {
            if (count == n - 1)
                return;
            else
            {
                cout << "Graph is not connected, No spanning tree possible \n";
                exit(1);
            }
        }
        status[current] = PERM;
        if (current != r)
        {
            count++;
            tree[count].u = predecessor[current];
            tree[count].v = current;
        }

        for (i = 0; i < n; i++)
        {
            if (adj[current][i] > 0 && status[i] == TEMP)
            {
                if (adj[current][i] < length[i])
                {
                    predecessor[i] = current;
                    length[i] = adj[current][i];
                }
            }
        }
    }
}

int min()
{
    int i;
    int min = INFNITY;
    int k = NIL;

    for (i = 0; i < n; i++)
    {
        if (status[i] == TEMP && length[i] < min)
        {
            min = length[i];
            k = i;
        }
    }
    return k;
}

int main()
{
    int wt_tree = 0;
    int i, root;
    edge tree[MAX];
    create_graph();
    display();
    cout << "Enter Root Vertex : ";
    cin >> root;
    maketree(root, tree);

    cout << "Edges to be include in spanning tree are : \n";

    for (i = 1; i <= n - 1; i++)
    {
        cout << tree[i].u << " -> ";
        cout << tree[i].v << " \n ";
        wt_tree += adj[tree[i].u][tree[i].v];
    }

    cout << "Weight of the spanning tree : " << wt_tree<<endl;
    return 0;
}
