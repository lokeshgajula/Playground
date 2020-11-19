#include<iostream>
#include<string>
using namespace std;
int main() 
{ 
string name;
getline(cin,name);
for(auto i=name.crbegin();i<name.crend();i++)
  cout<<*i;
}