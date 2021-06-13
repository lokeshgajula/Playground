#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int five,one,two;
  five=(n-4)/5;
  if((n-five*5)%2==0)
  {
    one=2;
  }
  else
  {
    one=1;
  }
  two=(n-(five*5+one))/2;
  cout<<one+two+five<<" "<<five<<" "<<two<<" "<<one;
  return 0;
}
