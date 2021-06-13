#include <iostream>
using namespace std;

int main() 
{
   int r,c,sum=0;
   cin>>r>>c;
   int arr[r][c];
    for(int i=0;i<r;i++)
    {
      for(int j=0;j<c;j++)
      {
        cin>>arr[i][j];
      }
    }
    int a,b;
    cin>>a>>b;
    for(int i=0;i<c;i++)
    {
      sum+=arr[a][i];
    }
    for(int i=0;i<r;i++)
    {
      sum+=arr[i][b];
    }
    sum=sum-arr[a][b];
    cout<<sum;
}
