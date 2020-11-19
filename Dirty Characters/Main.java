#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
  int arr[256]={0};
   char str1[1000];
   char str2[1000];
  cin>>str1;
  cin>>str2;
  for(int i=0;i<strlen(str2);i++)
  {
    arr[str2[i]]++;
  }
  for(int i=0;i<strlen(str1);i++)
  {
    if(arr[str1[i]]==0)
      cout<<str1[i];
  }
    return 0;
}