#include<iostream>
using namespace std;
int finds(int x);
int main()
{
  int n,sum=0;
  cin>>n;
  if(n==0)
  {
    cout<<1;
    exit(0);
  }
  int x=0;
  while(sum<n)
  {
    x++;
    sum=sum+finds(x);
  }
  cout<<4*(2*x+1)-4;
  return 0;
}
int finds(int x)
{
   int a=2*x+1;
   int sum=0;
   sum=sum+4*(a*x+2*(x*(x+1)/2))-4*2*x;
   return sum;
}