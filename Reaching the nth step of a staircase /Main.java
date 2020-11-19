#include <iostream>
using namespace std;
int c=0;
void rec(int n)
{
  if(n<0)
    return;
  if(n==0)
  {
    c++;
    return;
  }
  rec(n-1);
  rec(n-2);
}
int main() 
{
  int n;
  cin>>n;
  rec(n);
  cout<<c;
    return 0;
}