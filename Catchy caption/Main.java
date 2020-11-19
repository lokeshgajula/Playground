#include <cstring>
#include <iostream>
using namespace std;
int main()
{
   char cp[100];
   cin.getline(cp,100);
   int sc=0;
   for(int i=0;i<strlen(cp);i++)
   {
     if(cp[i]==' ')
     {
       sc++;
     }
   }
   sc++;
   if(sc>10)
   {
     cout<<"Caption not eligible for the contest";
   }
   else
   {
     cout<<"Caption eligible for the contest";
   }
   
}