#include <bits/stdc++.h>
using namespace std;

class Graph
{
 int v;
 
 vector<list<int>>adj;

 public:
 Graph(int v);
 void AddEdge(int v, int e);
 void BFS(int v);
};

Graph :: Graph(int v)
{
    this->v = v;
    adj.resize(v);
}

void Graph ::AddEdge(int v, int e)
{
    adj[v].push_back(e);

}

void Graph ::BFS(int s)
{
  vector<bool>visited;
  visited.resize(v, false);

  list<int>queue;
  visited[s]= true;
  queue.push_back(s);

  while(!queue.empty())
  {
    s = queue.front();
    cout<<s<<" ";
    queue.pop_front();


    for (auto adjecent : adj[s])
    {
        if(!visited[adjecent])
        {
            visited[adjecent] = true;
            queue.push_back(adjecent);
        }
    }
  }
}
int main()
{
    Graph g(5);

    g.AddEdge(0,1);
    g.AddEdge(0,2);
    g.AddEdge(1,2);
    g.AddEdge(2,0);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.AddEdge(4,4);
   

    cout<<"BFS traversal are as: "<<endl;
    g.BFS(2);

    return 0;
}