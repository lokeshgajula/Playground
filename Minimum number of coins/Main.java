#include<iostream>
using namespace std;
int main()
{
  int n,i=0;
  cin>>n;
  int cash[9]={1000,500,100,50,20,10,5,2,1};
  while(n>0)
  {
    if(cash[i]<=n)
    {
      n=n-cash[i];
      cout<<cash[i]<<"  ";
    }
    if(cash[i]<=n)
    {
      i--;
    }
    i++;
  }
  return 0;
}