#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
   char str[1000];
  int hc=0;
  cin>>str;
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]=='-')
      hc++;
  }
  for(int i=0;i<hc;i++)
    cout<<"-";
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]!='-')
      cout<<str[i];
  }
    return 0;
}
