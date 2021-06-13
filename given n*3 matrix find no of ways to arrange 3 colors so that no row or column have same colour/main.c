#include<stdio.h>
#include<stdlib.h>
int pow(int a,int b)
{
    int res=1;
    while(b>0)
    {
        res=res*a;
        b--;
    }
    return res;
}
int main()
{

    int n;
    scanf("%d",&n);
    int res;
    res=18*pow(3,n)+pow(24,n)-9*pow(8,n)+9*pow(2,n)-24;
    printf("%d",res);
}
