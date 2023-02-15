#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <list>
using namespace std;

class Graph
{
    int V;
    vector<list<int>> adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS(int s)
    {
        vector<bool> visited;
        visited.resize(V, false);

        list<int> queue;
        visited[s] = true;
        queue.push_back(s);

        while (!queue.empty())
        {
            s = queue.front();
            cout << s << " ";
            queue.pop_front();

            for (auto adjacent : adj[s])
            {
                if (!visited[adjacent])
                {
                    visited[adjacent] = true;
                    queue.push_back(adjacent);
                }
            }
        }
    }
};

int main()
{
    Graph g(8);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,5);
    g.addEdge(2,3);
    g.addEdge(4,6);
    g.addEdge(4,7);
    g.addEdge(5,7);
    g.BFS(5);
    return 0;
}