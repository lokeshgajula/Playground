#include<iostream>
#include<algorithm>
using namespace std;
void permutation(string str);
int main()
{
  string str;
  cin>>str;
  permutation(str);
  return 0;
}
void permutation(string str)
{
  sort(str.begin(),str.end());
  while(1)
  {
    cout<<str<<"\n";
    if(!next_permutation(str.begin(),str.end()))
       {
         break;
       }
  }
}
