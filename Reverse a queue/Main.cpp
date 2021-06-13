#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int data,c=0;
  while(1)
  {
    cin>>data;
    if(data<0)
      break;
    arr[c++]=data;
  }
  if(c==0)
  {
    cout<<"Queue is empty";
    exit(0);
  }
  cout<<"Before reversing:\n";
  for(int i=0;i<c;i++)
    cout<<arr[i]<<" ";
  cout<<"\nAfter reversing:\n";
  for( int i=c-1;i>=0;i--)
    cout<<arr[i]<<" ";
  return 0;
}
