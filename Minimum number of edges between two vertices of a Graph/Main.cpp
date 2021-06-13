#include <iostream>
#include <bits/stdc++.h>
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
  	int s,e;
  	while(1)
    {
      cin>>s;
      if(s<0)
        break;
      cin>>e;
      graph[s][e]=1;
      graph[e][s]=1;
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
  	cin>>s>>e;
  	cout<<graph[s][e];
    return 0;
}
