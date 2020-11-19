#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct item 
{
  int start;
  int end;
};
bool cmp(struct item a , struct item b)
{
  return (a.end<b.end);
}
int main()
{
  int size;
  cin>>size;
  struct item arr[size];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i].start;
  }
  for(int i=0;i<size;i++)
  {
    cin>>arr[i].end;
  }
  sort(arr,arr+size,cmp);
  //for(int i=0;i<size;i++)
    //cout<<"start="<<arr[i].start<<" end="<<arr[i].end<<"\n";
  int index=1;
  int out[size];
  out[0]=0;
  int prev=0;
  //cout<<"prev= "<<prev<<" ";
  for(int i=1;i<size;i++)
  {
    //cout<<"i="<<i<<" ";
    if(arr[i].start>=arr[prev].end)
    {
      //cout<<"inside , prev= "<<i;
      //cout<<"index="<<index<<" ";
      out[index]=i;
      index++;
      prev=i;
    }
    
  }
  for(int i=0;i<index;i++)
    cout<<out[i]<<" ";
  return 0;
}