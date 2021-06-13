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
void pop()
{
  cout<<arr[top];
  top--;
}
int main()
{
  char str[1000];
  cin>>str;
  for(int i=0;i<strlen(str);i++)
  {
    push(str[i]);
  }
  while(top!=-1)
  {
    pop();
  }
  return 0;
}
