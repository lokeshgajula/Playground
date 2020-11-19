#include<iostream>
using namespace std;
int arr[1000];
int main()
{
 	int s1,s2,data;
  	cin>>s1;
  	int s1top=-1;
  	for(int i=0;i<s1;i++)
    {
      cin>>data;
      s1top++;
      arr[s1top]=data;
    }
  	int s2top=s1;
  	cin>>s2;
    for(int i=0;i<s2;i++)
    {
      cin>>data;
      s2top++;
      arr[s2top]=data;
    }
  	int c1,c2;
  	c1=s1top;
  	c2=s2top;
  	cout<<"Stack 1 Elements:\n";
  	for(int i=c1;i>=0;i--)
    {
      cout<<arr[i]<<" ";
    }
  	cout<<endl;
  	cout<<"Stack 2 Elements:\n";
    for(int i=c2;i>s1;i--)
    {
      cout<<arr[i]<<" ";
    }
  	cout<<endl;
  	int ds1;
  	cin>>ds1;
  	int ds2;
    cin>>ds2;
  	for(int i=0;i<ds1;i++)
    {
      if(s1top==-1)
      {
        cout<<"Stack underflow. pop from stack 1 failed\n";
      }
      else
      {
        s1top--;
      }
    }
    for(int i=0;i<ds2;i++)
    {
      if(s2top==s1)
      {
        cout<<"Stack underflow. pop from stack 2 failed\n";
      }
      else
      {
        s2top--;
      }
    }
  cout<<"Stack 1 Elements:\n";
  	for(int i=s1top;i>=0;i--)
    {
      cout<<arr[i]<<" ";
    }
  	cout<<endl;
  	cout<<"Stack 2 Elements:\n";
    for(int i=s2top;i>s1;i--)
    {
      cout<<arr[i]<<" ";
    }
  	cout<<endl;
  	
}