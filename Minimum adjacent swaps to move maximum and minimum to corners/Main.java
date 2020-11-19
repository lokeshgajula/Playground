#include<iostream>
using namespace std;
int findmin(int arr[],int size)
{
  int min=arr[0];
  int index=0;
  for(int i=1;i<size;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
      index=i;
    }
  }
  return index;
}
int findmax(int arr[],int size)
{
  int max=arr[0];
  int index=0;
  for(int i=1;i<size;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      index=i;
    }
  }
  return index;
}
int main()
{
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
    cin>>arr[i];
  int minindex,maxindex;
  minindex=findmin(arr,size);
  maxindex=findmax(arr,size);
  if(maxindex<minindex)
  {
    cout<<((maxindex-0)+(size-1-minindex));
  }
  else
  {
    cout<<((maxindex-0)+(size-2-minindex));
  }
  return 0;
}