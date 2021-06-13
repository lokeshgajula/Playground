#include <iostream>
#include <cstring>
using namespace std;
int top=-1;
char arr[1000];
void push(char d)
{
  top++;
  arr[top]=d;
}
void pop()
{
  top--;
}
int balanced(char str[],int i,int j)
{
  top=-1;
  for(int k=i;k<=j;k++)
  {
    if(str[k]=='(')
      push(str[k]);
    else
    {
      if(arr[top]=='('&&top!=-1)
      {
        pop();
      }
      else
      {
        return 0;
      }
    }
  }
  if(top!=-1)
  {
    return 0;
  }
  return 1;
}
int main() 
{
  char str[1000];
  cin>>str;
  int max=0;
  for(int i=0;i<strlen(str);i++)
  {
    for(int j=strlen(str)-1;j>=i;j--)
    {
      if(balanced(str,i,j))
      {
        //cout<<i<<j<<"balanced"<<"\n";
        if(max<(j-i))
        {
          max=(j-i)+1;
        }
      }
    }
  }
  cout<<max;
}
