#include <stdio.h>
#include <stdlib.h>
int findpres(int arr1[],int arr2[],int val1,int val2,int l)
{
    for(int i=0;i<l;i++)
    {
        if((arr1[i]==val1 && arr2[i]==val2) || (arr1[i]==val2&&arr2[i]==val1))
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int n,l,triads[100],tc=0;
    printf("no of friends, no of links, start  and end of all the links");
    scanf("%d",&n);
    scanf("%d",&l);
    int s[l],e[l];
    int f1,f2;
    for(int i=0;i<l;i++)
    {
        scanf("%d",&s[i]);
        scanf("%d",&e[i]);
    }
    for(int i=0;i<l;i++)
    {
        printf("%d ",s[i]);
        printf("%d",e[i]);
        printf("\n");
    }
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
                f1=e[i];
                f2=e[j];
                if(findpres(s,e,f1,f2,l)>0)
                {
                    printf("friends are %d %d %d\n",s[i],f1,f2);
                    triads[tc++]=s[i];
                    triads[tc++]=f1;
                    triads[tc++]=f2;
                }

            }
        }
    }
    printf("\nno of triads=%d\n",tc/3);
    int min=1000000000;
    int sum;
    for(int i=0;i<tc;i=i+3)
    {
        int a,b,c;
        a=triads[i];
        b=triads[i+1];
        c=triads[i+2];
        sum=0;
        for(int j=0;j<l;j++)
        {
            if(s[j]==triads[i])
            {
                if(e[j]!=a && e[j]!=b && e[j]!=c)
                {
                    sum=sum+e[j];
                    printf("node connection %d other than from triad %d \n",triads[i],e[j]);
                }
            }
            if(e[j]==triads[i])
            {
                if(s[j]!=a && s[j]!=b && s[j]!=c)
                {
                    sum=sum+s[j];
                    printf("node connection %d other than from triad %d \n",triads[i],s[j]);
                }
            }
            if(s[j]==triads[i+1])
            {
                if(e[j]!=a && e[j]!=b && e[j]!=c)
                {
                    sum=sum+e[j];
                    printf("node connection %d other than from triad %d \n",triads[i+1],e[j]);
                }
            }
            if(e[j]==triads[i+1])
            {
                if(s[j]!=a && s[j]!=b && s[j]!=c)
                {
                    sum=sum+s[j];
                    printf("node connection %d other than from triad %d \n",triads[i+1],s[j]);
                }
            }
            if(s[j]==triads[i+2])
            {
                if(e[j]!=a && e[j]!=b && e[j]!=c)
                {
                    sum=sum+e[j];
                    printf("node connection %d other than from triad %d \n",triads[i+2],e[j]);
                }
            }
            if(e[j]==triads[i+2])
            {
                if(s[j]!=a && s[j]!=b && s[j]!=c)
                {
                    sum=sum+s[j];
                    printf("node connection %d other than from triad %d \n",triads[i+2],s[j]);
                }
            }
        }
        printf("sum of triad x=%d\n",sum);
        if(sum<min)
            min=sum;
    printf("min of all triads =%d\n",min);
    }
    return 0;
}
