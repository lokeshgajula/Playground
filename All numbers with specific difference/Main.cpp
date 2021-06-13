#include<iostream>
using namespace std;
int sumofdigits(int n)
{
  int sum=0;
  while(n>0)
  {
    sum=sum+n%10;
    n=n/10;
  }
  return sum;
}
int main()
{
  int N,D,c=0;
  cin>>N>>D;
  if(D==0)
  {
    cout<<N;
    exit(1);
  }
  else
  {
    while(N>9)
    {
      if((N-sumofdigits(N)>=D))
      {
        c++;
        N--;
      }
    }
  }
  cout<<c;
  return 0;
}
