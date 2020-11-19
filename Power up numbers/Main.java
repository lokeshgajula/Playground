#include<iostream>
using namespace std;
long long int power(int a,int b);
int main()
{
  int a,b;
  cin>>a>>b;
  long long int r;
  r=power(a,b);
  cout<<r;
}
long long int power(int a,int b)
{
  long long int i=1;
  while(b>0)
  {
    i=i*a;
    b--;
  }
  return i;
}