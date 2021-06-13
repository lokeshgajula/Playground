#include<iostream>
using namespace std;

int main()
{
  long int no_of_samples,no_of_ranges;
  cin>>no_of_samples>>no_of_ranges;
  int samples[no_of_samples];
  int srange[no_of_ranges];
  int erange[no_of_ranges];
  int range_count[no_of_ranges];
  for(long int i=0;i<no_of_samples;i++)
  {
    cin>>samples[i];
  }
  for(long int i=0;i<no_of_ranges;i++)
  {
    range_count[i]=0;
    cin>>srange[i];
    cin>>erange[i];
  }
  for(int i=0;i<no_of_samples;i++)
  {
    for(int j=0;j<no_of_ranges;j++)
    {
      if(samples[i]>=srange[j]&&samples[i]<=erange[j])
      {
        range_count[j]++;
      }
    }
  }
  for(int i=0;i<no_of_ranges;i++)
    cout<<range_count[i]<<" ";
  return 0;
}
