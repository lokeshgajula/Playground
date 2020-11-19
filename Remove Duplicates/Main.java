#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
   	int arr[256]={0};
  	char str[10000],c;
  	cin>>str;
    for(int i=0;i<strlen(str);i++)
    {
      arr[str[i]]++;
    }
  	for(int i=0;i<strlen(str);i++)
    {
      if(arr[str[i]]>0)
      {
        cout<<str[i];
        arr[str[i]]=0;
      }
    }
    return 0;
}