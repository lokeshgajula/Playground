#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[],int u,int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void DFSUtil(int u,vector<int> adj[],vector<bool> &visited)
{
  visited[u]=true;
  cout<<u<<" ";
  for(int i=adj[u].size()-1;i>=0;i--)
    if(visited[adj[u][i]]==false)
      DFSUtil(adj[u][i],adj,visited);
}
void DFS(vector<int> adj[],int v)
{
  vector<bool> visited(v,false);
  for(int u=0;u<v;u++)
    if(visited[u]==false)
      DFSUtil(u,adj,visited);
}
int main()
{
  int v;
  cin>>v;
  vector<int> adj[v];
  int s,e;
  while(1)
  {
    cin>>s>>e;
    if(s<0 && e<0)
      break;
    addEdge(adj,s,e);
  }
  cout<<"DFS : ";
  DFS(adj,v);
  return 0;
}
