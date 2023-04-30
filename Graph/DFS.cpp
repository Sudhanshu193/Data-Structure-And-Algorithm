#include <bits/stdc++.h>
using namespace std;

class graph
{
    public:

    unordered_map<int, bool>visited;
    unordered_map<int, list<int>>adj;

    void addEdge(int v , int e)
    {
        adj[v].push_back(e);
    }

    void dfs(int v);
};

void graph :: dfs(int v)
{
    visited[v]= true;
    cout<<v<<" ";

    list<int> :: iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++)
    {
        if(!visited[*i])
        {
            dfs(*i);
        }
    }

}

 int main()
 {
    graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(2,5);
    g.addEdge(3,4);
    g.addEdge(4,4);

    g.dfs(0);
 }