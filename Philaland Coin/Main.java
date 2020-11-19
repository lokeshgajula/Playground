#include<iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int j=0;j<t;j++)
  {
  int n;
  cin>>n;
  int count=0;
  while(n>0)
  {
    n=n/2;
    count++;
  }
  cout<<count<<endl;
  }
  return 0;
}