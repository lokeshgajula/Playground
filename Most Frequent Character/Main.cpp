#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
   int arr[256]={0};
   char str[1000];
  cin>>str;
  for(int i=0;i<strlen(str);i++)
  {
    arr[str[i]]++;
  }
  int max=0;
  for(int i=0;i<256;i++)
  {
    if(arr[i]>max)
      max=arr[i];
  }
  cout<<max;
}
