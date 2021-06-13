#include <iostream>
using namespace std;
long long int min(long long int a,long long int b);
int isprime(long long int a);
int main() 
{
   long long int a,b,x,i;
   cin>>a>>b;
  int cop=0;
   long long int  c=min(a,b);
   //cout<<"test"<<c;
   for(i=c;i>1;i--)
   {
     if(isprime(i))
     {
       if(a%i==0 && b%i==0)
       {
         cout<<i;
         cop=1;
         break;
       }
     }
   }
  if(cop==0)
    cout<<"-1";
  
}
int isprime(long long int n)
{
  for(long long int i=2;i<n;i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}
long long int min(long long int a,long long int b)
     {
       if(a>b)
         return b;
       else
         return a;
     }
