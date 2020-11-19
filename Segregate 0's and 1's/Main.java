#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str[100];
    cin>>str;
    int onecount=0;
    int l=strlen(str);
    while(l>0)
    {
      if(str[l-1]=='1')
      {
        onecount++;
        l--;
      }
      
      else
        l--;
    }
    for(int i=0;i<onecount;i++)
    {
      cout<<"1";
    }
    for(int j=0;j<(strlen(str)-onecount);j++)
    {
      cout<<"0";
    }
    return 0;
}