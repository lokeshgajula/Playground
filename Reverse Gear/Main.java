#include<iostream>
using namespace std;
int main()
{
    int n;
    int f,b,t,d;
   	cin>>n;
    if(n>0)
    {
    	while(n--)
    	{
    		cin>>f>>b>>t>>d;
    		int count=0;
    		int dist=0;
    		int ans=0;
    		if(f>=b || d == 0 || t == 0)
        		cout<<"Cannot park\n";
    		else
    		{
        		while(1)
        		{
            		if(dist+b<d)//distanced covered+b<d
      					dist+=b;//backward move
      				else   
      				{   
          				ans=(d-dist)*t;//remaining distance*t 
          				break;  
      				}
      				dist-=f;//forwared move
      				count++;//count no. of bacward and forward
     			}
     			ans+=(count*t)*(f+b); //total time
     			cout<<ans<<endl;
    		}
    	}
    }
    else
    {
        cout<<"Invalid test case";
    }
    return 0;
}