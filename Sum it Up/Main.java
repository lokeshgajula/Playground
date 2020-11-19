#include<iostream>
using namespace std;
int sum(long int n);
int main()
{
  long int n;
  int b;
  cin>>n;
  b=sum(n);
  while(b/10!=0)
  {
    b=sum(b);
  }
  cout<<b;
}
int sum(long int n)
{
  int s=0;
  while(n>0)
  {
    s=s+n%10;
    n=n/10;
  }
  return s;
}