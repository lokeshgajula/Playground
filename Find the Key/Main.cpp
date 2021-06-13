#include<iostream>
using namespace std;
int min(int arr[],int n);
int max(int arr[],int n);
int main()
{
  int d0[3];
  int d1[3];
  int d2[3];
  int d3[3];
  int n[3];
  for(int i=0;i<3;i++)
  {
    cin>>n[i];
  }
  for(int i=0;i<3;i++)
  {
    d0[i]=n[i]%10;
    n[i]=n[i]/10;
  }
  for(int i=0;i<3;i++)
  {
    d1[i]=n[i]%10;
    n[i]=n[i]/10;
  }
  for(int i=0;i<3;i++)
  {
    d2[i]=n[i]%10;
    n[i]=n[i]/10;
  }
  for(int i=0;i<3;i++)
  {
    d3[i]=n[i]%10;
    n[i]=n[i]/10;
  }
  cout<<min(d3,3)<<max(d2,3)<<min(d1,3)<<max(d0,3);
  return 0;
}
int min(int arr[],int n)
{
  int min=arr[0],temp;
  for(int i=1;i<n;i++)
    if(min>arr[i])
    {
      min=arr[i];
    }
  return min;
}
int max(int arr[],int n)
{
  int max=arr[0],temp;
  for(int i=1;i<n;i++)
    if(max<arr[i])
    {
      max=arr[i];
    }
  return max;
}
