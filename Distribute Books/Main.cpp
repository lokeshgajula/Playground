#include<iostream>
using namespace std;
int der(long long int arr[],int n)
{
}

int main()
{
  int n;
  cin>>n;
  long long int arr[n+1];
  arr[0]=0;
  arr[1]=0;
  arr[2]=1;
  arr[3]=2;
  if(n<4)
  {
    cout<<arr[n];
    exit(1);
  }
  for(int i=4;i<=n;i++)
  {
    arr[i]=((i-1)*(arr[i-1]+arr[i-2]))%100000007;
  }
  cout<<arr[n];
  return 0;
}
