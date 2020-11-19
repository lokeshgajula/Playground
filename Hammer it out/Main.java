#include<iostream>
using namespace std;
int main()
{
  int c=1,es=0,os=0;
  long long int n;
  cin>>n;
  while(n>0)
  {
    if(c%2==1)
    {
      es=es+n%10;
    }
    else
    {
      os=os+n%10;
    }
    c++;
    n=n/10;
  }
  cout<<es-os;
}