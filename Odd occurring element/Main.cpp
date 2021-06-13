#include <iostream>
using namespace std;

int main() 
{
    int n,x;
  cin>>n;
  int arr[100000]={0};
  for(int i=0;i<n;i++)
  {
    cin>>x;
    arr[x]++;
  }
  for(int i=0;i<100000;i++)
  {
    if(arr[i]%2!=0)
      cout<<i;
  }
    return 0;
}
