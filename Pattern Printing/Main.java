#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int c=1;
  int prev=n*(n+1);
  int cur=prev-n+1;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<2*i;j++)
    {
      cout<<"*";
    }
    for(int k=n-i;k>0;k--)
    {
      cout<<c*10;
      c++;
    }
    
    for(int l=n-i;l>0;l--)
    {
      if(l!=1)
      {
        cout<<cur*10;
        cur++;
        prev--;
      }
      else
      {
        cout<<cur;
        prev--;
      }
    }
    cur=prev-(n-i)+2;
    cout<<endl;
  }
  return 0;
}