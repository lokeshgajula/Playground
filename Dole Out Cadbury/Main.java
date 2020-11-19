#include<iostream>
using namespace std;
int count(int a,int b)
{
  if(a==b)
    return 1;
  if(a>b)
    return 1+count(a-b,b);
  return 1+count(a,b-a);
}
int main()
{
  int p,q,r,s;
  cin>>p>>q>>r>>s;
  int total=0;
  for(int i=p;i<=q;i++)
  {
    for(int j=r;j<=s;j++)
    {
      total=total+count(i,j);
    }
  }
  cout<<total;
  return 0;
}