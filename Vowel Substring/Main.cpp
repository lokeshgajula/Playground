#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int vowel(char c)
{
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    return 1;
  return 0;
}
int perfect(int s,int e,char arr[])
{
  if(e-s<4)
    return 0;
  set<char> se;
  for(int i=s;i<=e;i++)
  {
    if(vowel(arr[i]))
      se.insert(arr[i]);
    else
      return 0;
  }
  if(se.size()==5)
    return 1;
  return 0;
}
int main() 
{
   char str[1000];
  cin>>str;
  int x=strlen(str);
  int arr[x][x];
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<x;j++)
    {
      arr[i][j]=0;
    }
  }
   for(int i=0;i<x;i++)
  {
    for(int j=i+1;j<x;j++)
    {
      if(perfect(i,j,str))
      {
        arr[i][j]=1;
      }
    }
  }
  int c=0;
  for(int i=0;i<x;i++)
  {
    for(int j=i+1;j<x;j++)
    {
      if(arr[i][j]==1)
        c++;
    }
  }
  cout<<c;
    return 0;
}
