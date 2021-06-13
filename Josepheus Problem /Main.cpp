#include<iostream>
using namespace std;
int fun(int n,int k);
int main()
{
  int n;
  int k;
  cin>>n>>k;
  cout<<fun(n,k);
  return 0;
}
int fun(int n,int k)
{
  if(n==1)
    return 1;
  else
    return (fun(n-1,k)+k-1)%n+1;
}
