#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int N;
  cin>>N;
  int k;
  cin>>k;
  vector<int> v;
  for(long int i=1;i*i<=N;i++)
  {
    if(N%i==0)
    {
      if(i*i==N)
      {
        v.push_back(i);
      }
      else
      {
      v.push_back(i);
      v.push_back(N/i);
      }
    }
  }
  int temp;
  for(int i=0;i<v.size();i++)
  {
    for(int j=i+1;j<v.size();j++)
    {
      if(v[i]<v[j])
      {
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
      }
    }
  }
  //for(int i=0;i<v.size();i++)
    //cout<<v[i]<<" ";
  if(k>v.size())
    cout<<v[v.size()-1];
  else
  cout<<v[k-1];
  return 0;
}