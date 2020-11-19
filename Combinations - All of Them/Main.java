#include<iostream>
using namespace std;
void printCombinationsWrapper(int arr[],int n);
void printCombinations(int arr[],int n,int selected[],int visited_count);
#define SIZE 10
int main()
{
  int arr[SIZE],n,i;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  printCombinationsWrapper(arr,n);
}
void printCombinationsWrapper(int arr[],int n)
{
  int selected[SIZE]={};
  int visited_count=0;
  printCombinations(arr,n,selected,visited_count);
}
void printCombinations(int arr[],int n,int selected[],int visited_count)
{
  if(visited_count==n){
    int i;
  	for(i=0;i<n;i++)
    {
      if(selected[i]==1)
        cout<<arr[i]<<",";
    }
  cout<<"\n";
  return ;
}
selected[visited_count]=1;
printCombinations(arr,n,selected,visited_count+1);
selected[visited_count]=0;
printCombinations(arr,n,selected,visited_count+1);
    }