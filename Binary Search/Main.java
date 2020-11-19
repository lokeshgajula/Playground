#include<iostream>
using namespace std;
int main(void)
{
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  int element,middle;
  cin>>element;
  int s=0,e=size-1;
  while(s<=e)
  {
    middle=((s+e)/2);
    if(arr[middle]==element)
    {
      cout<<middle;
      break;
    }
    else if(arr[middle]<element)
    {
      s=middle+1;
    }
    else
    {
      e=middle-1;
    }
  }
  if(arr[middle]!=element)
    cout<<"Not found";
}