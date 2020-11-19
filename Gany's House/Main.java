#include <iostream>
using namespace std;
int ndig(long long int n);
int main() 
{
    long long int arr[1000];
    int n;
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<1000;i++)
    {
      arr[i]=arr[i-1]+arr[i-2];
      if(ndig(arr[i])==n)
      {
         cout<<i;
         break;
      }
    }
    return 0;
}
int ndig(long long int n)
{
  int di=0;
  if(n==0)
    return 1;
  while(n>0)
  {
    n=n/10;
    di++;
  }
  return di;
}