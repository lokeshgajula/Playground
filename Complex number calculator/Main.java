#include <iostream>
using namespace std;
struct comp
{
  int real;
  int complex;
};
comp sum(comp a, comp b);
comp diff(comp a, comp b);
comp mul(comp a,comp b);
int main() 
{
    comp a,b,r;
    int c;
    cin>>c;
    cin>>a.real;
    cin>>a.complex;
    cin>>b.real;
    cin>>b.complex;
    if(c==1)
      r=sum(a,b);
    else if(c==2)
      r=diff(a,b);
    else if(c==3)
      r=mul(a,b);
    else 
    {
      cout<<"Invalid choice";
      exit(0);
    }
    cout<<r.real;
    if(r.complex>0)
      cout<<"+"<<r.complex<<"i";
    else
      cout<<r.complex<<"i";
    return 0;
}
comp sum(comp a,comp b)
{
  comp r;
  r.real=a.real+b.real;
  r.complex=a.complex+b.complex;
  return r;
}
comp diff(comp a,comp b)
{
  comp r;
  r.real=a.real-b.real;
  r.complex=a.complex-b.complex;
  return r;
}
comp mul(comp a,comp b)
{
  comp r;
  r.real=a.real*b.real-a.complex*b.complex;
  r.complex=a.real*b.complex+a.complex*b.complex;
  return r;
}