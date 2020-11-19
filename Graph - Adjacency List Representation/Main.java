#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int nv,ne;
  cout<<"Enter the number of vertices:"<<endl;
  cin>>nv;
  cout<<"Enter the number of edges:"<<endl;
  cin>>ne;
  vector<int> arr[nv];
  int s,e;
  for(int i=0;i<ne;i++)
  {
    cout<<"Enter the Start node and End node of edge "<<i+1<<endl;
    cin>>s>>e;
    arr[s].push_back(e);
    arr[e].push_back(s);
  }
  cout<<"Adjacency List:"<<endl;
  for(int i=0;i<nv;i++)
  {
    cout<<i<<"--->";
    for(int j=0;j<arr[i].size();j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}