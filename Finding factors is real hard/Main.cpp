#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
int c=0;
long long int n;
cin>>n;
long long int arr[1000]={n+1};
for(long long int i=1;i<=sqrt(n);i++)
{
  if(n%i==0 && i*i!=n)
  {
    arr[c++]=i;
    arr[c++]=n/i;
  }
  if(n%i==0 && i*i==n)
  {
    arr[c++]=i;
  }
}
int i=0;
while(arr[i]!=0)
{
  i++;
}
sort(arr,arr+i);
for(int j=0;j<i;j++)
  cout<<arr[j]<<" ";

}
