#include<iostream>
using namespace std;
int find(int a,int n,int d)
{
  return a+(n-1)*d;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  cin>>arr[0];
  cin>>arr[1];
  cin>>arr[2];
  int dx=arr[1]-arr[0];
  int d2=arr[2]-arr[1];
  if(dx!=d2)
  {
   if(dx<d2)
   {
     cout<<arr[1]+dx;
     goto x;
   }
   else
   {
     cout<<arr[1]-d2;
     goto x;
   }
  }
  for(int i=3;i<n;i++){
    cin>>arr[i];
    if((arr[i]-arr[i-1])!=dx)
    {
      cout<<arr[i]-dx;
      break;
    }
  }
  /*
  int d=(arr[n-1]-arr[0])/n;
  int a=arr[0];
  int s=0,e=n-1,m;
  while(s<e)
  {
    m=(s+e)/2;
    if(find(a,m+1,d)==arr[m])
    {
      s=m+1;
    }
    else if(find(a,m+1,d)<arr[m])
    {
      e=m-1;
    }
  }
  if(s==e)
  {
    if(find(a,s+1,d)<arr[s])
      cout<<arr[s]-d;
    else
      cout<<arr[s]+d;
  }*/
x:
    {
    cout<<"";
    }
  return 0;
}