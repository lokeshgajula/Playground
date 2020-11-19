#include<iostream>
#include<bits/stdc++.h>
#define INF 99999
using namespace std;

int main()
{
  int n;
  cin>>n;
  int graph[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      graph[i][j]=INF;
    }
  }
  int e,st,en,c=0;
  cin>>e;
  for(int i=0;i<e;i++)
  {
    cin>>st>>en;
    graph[st][en]=1;
  }
  int i,j,k;
  for(k=0;k<n;k++)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(graph[i][k]+graph[k][j]<graph[i][j])
          graph[i][j]=graph[i][k]+graph[k][j];
      }
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      if(graph[i][j]==INF)
        c=1;
  }
  if(c==1)
    cout<<"No";
  else 
    cout<<"Yes";
}