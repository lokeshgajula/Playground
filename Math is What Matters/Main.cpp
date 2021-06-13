#include<iostream>
using namespace std;
long long int power(int a,int b);
int digits(long long int a);
int main()
{
  long long int n,s=0,c;
  cin>>n;
  c=n;
  int x=digits(n);
  while(n>0)
  {
    s=s+power(n%10,x);
    n=n/10;
  }
  if(s==c)
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }
}
int digits(long long int a)
{
  int r=0;
  while(a>0)
  {
    a=a/10;
    r++;
  }
  return r;
}
long long int power(int a,int b)
{
  long long int r=1;
  while(b>0)
  {
    r=r*a;
    b--;
  }
  return r;
}
