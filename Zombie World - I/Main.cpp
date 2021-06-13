#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
      int N,T,E[50],P,D,c=0;
      cin>>N>>T;
      for(int i=0;i<N;i++)
        cin>>E[i];
      cin>>P>>D;
      if(T<N)
      {
        c++;
      }
      else
      {
      sort(E,E+N);
      for(int i=0;i<N;i++)
      {
        if(E[i]<P)
          P=P+(P-E[i]);
        else
        {
          c++;
          break;
        }
      }
    }
    if(P>=D&&!c)
      cout<<"YES";
    else
      cout<<"NO";
    }
    return 0;
}
