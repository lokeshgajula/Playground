#include <iostream>
using namespace std;
void merging_arrays(int arr[],int low,int middle,int high)
{
  int n1,n2;
  n1=middle-low+1;
  n2=high-middle;
  int left[n1];
  int right[n2];
  for(int i=0;i<n1;i++)
  {
    left[i]=arr[low+i];
  }
  for(int j=0;j<n2;j++)
  {
    right[j]=arr[middle+1+j];
  }
  int i=0;
  int j=0;
  int k=low;
  while(i<n1&&j<n2)
  {
    if(left[i]<=right[j])
    {
      arr[k]=left[i];
      i++;
      k++;
    }
    else
    {
      arr[k]=right[j];
      j++;
      k++;
    }
  }
  while(i<n1)
  {
    arr[k]=left[i];
    i++;
    k++;
  }
  while(j<n2)
  {
    arr[k]=right[j];
    j++;
    k++;
  }
  
}
void merge_sort(int arr[],int low,int high)
{
  if(low<high)
  {
    int middle=(low+high)/2;
    merge_sort(arr,low,middle);
    merge_sort(arr,middle+1,high);
    merging_arrays(arr,low,middle,high);
  }
}
int main() 
{
   int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++)
    cin>>arr[i];
  cout<<"Before Sort:\n";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
  merge_sort(arr,0,size-1);
  cout<<"\nAfter Sort:\n";
  for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}