#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
char arr[1000];
int top=-1;
void push(char d)
{
    top++;
    arr[top]=d;
    //cout<<"pushed "<<d;
}
int pres(char s)
{
    if(s=='*'||s=='/')
        return 2;
    else if(s=='+'||s=='-')
        return 1;
    return -1;
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
  	string output;
  	cin>>str;
  	int s,e;
  	for(s=0,e=strlen(str)-1;s<=e;s++,e--)
    {
      if(str[s]=='(')
        str[s]=')';
      else if(str[s]==')')
        str[s]='(';
      if(str[e]=='(')
        str[e]=')';
      else if(str[e]==')')
        str[e]='(';
      char temp=str[s];
      str[s]=str[e];
      str[e]=temp;
    }
  	//cout<<str;
    //cout<<str;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='(')
        {
            push(str[i]);
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='1'&&str[i]<='9'))
        {
            //cout<<str[i];
            output+=str[i];
        }
        else if(str[i]==')')
        {
            while(arr[top]!='('&&top!=-1)
            {
                char x=pop();
                //cout<<x;
              	output+=x;
            }
            char x=pop();
        }
        else
        {
            while(top!=-1&&pres(str[i])<=pres(arr[top]))
            {
                char t=pop();
                //cout<<t;
              	output+=t;

            }
            push(str[i]);
        }
    }
    while(top!=-1)
        {
      		char t=pop();
            //cout<<t;
      		output+=t;
        }
  for(s=0,e=output.length()-1;s<=e;s++,e--)
    {
      char temp=output[s];
      output[s]=output[e];
      output[e]=temp;
    }
  	cout<<output;
    return 0;
}
