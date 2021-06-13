#include <iostream>
#include <bits/stdc++.h>
#define N 10
int graph[N][N]={0};
using namespace std;

int main() 
{
    int nn,ne;
    string directed;
    cout<<"Please enter the number of nodes in the graph"<<endl;
  	cin>>nn;
  	cout<<"Please enter the number of edges in the graph"<<endl;
  	cin>>ne;
  	cout<<"Is the graph directed"<<endl;
  	cin>>directed;
  	cout<<"Adjacency Matrix Representation:"<<endl;
  	for(int i=0;i<nn;i++)
    {
      for(int j=0;j<nn;j++)
      {
        cout<<graph[i][j]<<" ";
      }
      cout<<endl;
    }
  	if(directed=="yes")
    {
    int s,e,w;
  	for(int i=0;i<ne;i++)
    {
      cout<<"Enter the start node, end node and weight of edge no "<<i+1<<endl;
      cin>>s>>e>>w;
      graph[s-1][e-1]=w;
    }
    }
  	else
    {
    int s,e,w;
    for(int i=0;i<ne;i++)
    {
      cout<<"Enter the start node, end node and weight of edge no "<<i+1<<endl;
      cin>>s>>e>>w;
      graph[s-1][e-1]=graph[e-1][s-1]=w;
    }
    }
  	cout<<"Adjacency Matrix Representation:"<<endl;
  	for(int i=0;i<nn;i++)
    {
      for(int j=0;j<nn;j++)
      {
        cout<<graph[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}
