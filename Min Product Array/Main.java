#include <iostream>
using namespace std;
int negative(int a)
{
  if(a<0)
    return 1;
  return 0;
}
int positive(int a)
{
  if(a>0)
    return 1;
  return 0;
}
int main() 
{
   int n, k;
  cin>>n>>k;
  int arr1[n],arr2[n],psum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>arr2[i];
  }
  int p,max=0,temp;
  for(int i=0;i<n;i++)
  {
    if(negative(arr1[i]*arr2[i])&&negative(arr2[i]))
    {
      temp=arr1[i]+2*k;
      p=arr2[i]*temp;
      if(max<abs(p-(arr1[i]*arr2[i])))
         max=abs(p-(arr1[i]*arr2[i]));
    }
    else if(negative(arr1[i]*arr2[i])&&negative(arr1[i]))
    {
      temp=arr1[i]-2*k;
      p=arr2[i]*temp;
      if(max<abs(p-(arr1[i]*arr2[i])))
         max=abs(p-(arr1[i]*arr2[i]));
    }
    else if(positive(arr1[i]*arr2[i])&&negative(arr1[i]))
    {
      temp=arr1[i]+2*k;
      p=arr2[i]*temp;
      if(max<abs(p-(arr1[i]*arr2[i])))
         max=abs(p-(arr1[i]*arr2[i]));
    }
    else
    {
      temp=arr1[i]-2*k;
      p=arr2[i]*temp;
      if(max<abs(p-(arr1[i]*arr2[i])))
         max=abs(p-(arr1[i]*arr2[i]));
    }
    psum=psum+arr1[i]*arr2[i];
  }
  cout<<psum-max;
}