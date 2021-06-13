#include <iostream>
#include <cstring>
using namespace std;
int count(char str[],char c)
{
  int count=0;
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]==c)
    {
      count++;
      str[i]=='*';
    }
  }
  return count;
}
void super_string(char str[])
{
  int i;
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]!='*')
    {
      int c=count(str,str[i]);
      if(c==(str[i]-96))
        continue;
      else
      {
        cout<<"NO ";
        break;
      }
    }
    else
    {
      continue;
    }
  }
  if(i==strlen(str)){
  cout<<"YES ";
  }
}

int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
  char str[400];
  
  cin>>str;
  super_string(str);
  }
   return 0;
      
}
