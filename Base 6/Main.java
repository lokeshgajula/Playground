#include<iostream>
using namespace std;
int cal(int num)
{
  int sum=0;
  while(num>0)
  {
    sum=sum+num%6;
    num=num/6;
  }
  return sum;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  int fin[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    fin[i]=cal(arr[i]);
  }
  int t=0;
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(fin[i]>fin[j])
        t++;
    }
  }
  cout<<t;
  return 0;
}