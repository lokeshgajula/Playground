#include<iostream>
#include<cstring>
using namespace std;
char arr[1000];
int top=-1;
void push(char a)
{
  top++;
  arr[top]=a;
}
char pop()
{
  char ele=arr[top];
  top--;
  return ele;
}

int main()
{
  char str[1000];
  cin>>str;
  for(int i=0;i<strlen(str);i++)
  {
    if(str[i]==')')
    {
      char c=pop();
      if(c=='(')
        continue;
      else
      {
        cout<<"Not Balanced";
        exit(0);
      }
    }
    else if(str[i]==']')
    {
      char c=pop();
      if(c=='[')
        continue;
      else
      {
        cout<<"Not Balanced";
        exit(0);
      }
    }
    if(str[i]=='}')
    {
      char c=pop();
      if(c=='{')
        continue;
      else
      {
        cout<<"Not Balanced";
        exit(0);
      }
    }
    else
    {
      push(str[i]);
    }
  }
 cout<<"Balanced";
  return 0;
}
