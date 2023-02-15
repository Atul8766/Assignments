#include <iostream>
#include <list>
#include <map>
using namespace std;

class Graph
{
    map<int, bool> visited;
    map<int, list<int>> adj;

public:
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void DFS(int v)
    {
        visited[v] = true;
        cout << v << " ";

        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); i++)
        {
            if(!visited[*i])
            {
                DFS(*i);
            }
        }
    }
};

int main()
{
    Graph g1;
    g1.addEdge(1,2);
    g1.addEdge(1,4);
    g1.addEdge(2,1);
    g1.addEdge(2,3);
    g1.addEdge(3,2);
    g1.addEdge(3,5);
    g1.addEdge(4,1);
    g1.addEdge(5,3);
    g1.DFS(2);
    return 0;
}