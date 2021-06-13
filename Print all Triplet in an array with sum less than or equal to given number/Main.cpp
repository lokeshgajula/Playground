#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
   cin>>x;
    v.push_back(x);
  }
  cin>>x;
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      for(int k=j+1;k<n;k++)
      {
        if(v[i]+v[j]+v[k]<=x)
        {
          cout<<"("<<v[i]<<", "<<v[j]<<", "<<v[k]<<")\n";
        }
      }
    }
  }
}
