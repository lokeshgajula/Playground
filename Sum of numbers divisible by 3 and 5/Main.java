#include<iostream>
using namespace std;

int main()
{
  int a,b,sum=0;
  cin>>a>>b;
  for(int i=a;i<b;i++)
  {
    if(i%15==0)
      sum=sum+i;
  }
  cout<<sum;
  return 0;
}