#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
  return a<b;
}
int main()
{
  int n;
  cin>>n;
  vector<int> v;
  for(int i=1;i*i<=n;i++)
  {
    if(n%i==0)
    {
    if(i*i==n)
    {
      v.push_back(i);
      continue;
    }
    v.push_back(i);
    v.push_back(n/i);
    }
  }
  sort(v.begin(),v.end(),cmp);
  int s=v.size();
  for(int i=0;i<s;i++)
    cout<<v[i]<<" ";
  return 0;
}
