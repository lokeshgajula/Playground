#include<iostream>
using namespace std;
void rec_search(int arr[100][100],int i,int j,int r,int c);
int main()
{
  int r,c,ic=0;
  cin>>r>>c;
  int arr[100][100];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>arr[i][j];
    }
  }
  /*for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cout<<arr[i][j];
    }
    cout<<"\n";
  }*/
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      if(arr[i][j]==1)
      {
        //cout<<"land at : "<<i<<j<<"\n";
        ic++;
        rec_search(arr,i,j,r,c);
      }
    }
  }
  cout<<ic-1;
  return 0;
}
void rec_search(int arr[100][100],int i,int j,int r,int c)
{
  arr[i][j]=0;
  if(j-1>=0 && arr[i][j-1]==1)
  {
    //cout<<"searching i ="<<i<<" j="<<j-1<<"\n";
    rec_search(arr,i,j-1,r,c);
  }
  if(i-1>=0&&j-1>=0 && arr[i-1][j-1]==1)
  {
    //cout<<"searching i="<<i-1<<" j="<<j-1<<"\n";
    rec_search(arr,i-1,j-1,r,c);
  }
  if(i-1>=0&&arr[i-1][j]==1)
  {
    //cout<<"searching i="<<i-1<<" j="<<j<<"\n";
    rec_search(arr,i-1,j,r,c);
  }
  if(i-1>=0&&j+1<=c-1&&arr[i-1][j+1]==1)
  {
    //cout<<"searching i="<<i-1<<" j="<<j+1<<"\n";
    rec_search(arr,i-1,j+1,r,c);
  }
  if(j+1<=c-1&&arr[i][j+1]==1)
  {
    //cout<<"searching i="<<i<<" j="<<j+1<<"\n";
    rec_search(arr,i,j+1,r,c);
  }
  if(i+1<=r-1&&j+1<=c-1&&arr[i+1][j+1]==1)
  {
    //cout<<"searching i="<<i+1<<" j="<<j+1<<"\n";
    rec_search(arr,i+1,j+1,r,c);
  }
  if(i+1<=r-1&&arr[i+1][j]==1)
  {
    //cout<<"searching i="<<i+1<<" j="<<j<<"\n";
    rec_search(arr,i+1,j,r,c);
  }
  if(i+1<=r-1 && j-1>=0&&arr[i+1][j-1]==1)
  {
    //cout<<"searching i="<<i+1<<" j="<<j-1<<"\n";
    rec_search(arr,i+1,j-1,r,c);
  }
  return;
}
