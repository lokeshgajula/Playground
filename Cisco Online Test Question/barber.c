#include <stdio.h>
#include <stdlib.h>

int max_index(int arr[],int size,int check[])
{
    int index;
    for(int i=0;i<size;i++)
    {
        if(check[i]>0)
        {
            index=i;
            break;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(check[i]!=-1&&check[i]!=-2)
        {
            if(arr[i]>arr[index])
            {
                index=i;
            }
        }
    }
    return index;
}
int main()
{
    int size;
    scanf("%d",&size);
    int start_time[size];
    int end_time[size];
    int values[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d %d %d",&start_time[i],&end_time[i],&values[i]);
    }
    /*for(int i=0;i<size;i++)
    {
        printf("s=%d , e= %d , v=%d\n",start_time[i],end_time[i],values[i]);
    }*/
    int check[size];
    int c=size;
    //printf("c=%d",c);
    int index=max_index(values,size,check);
    //printf("index of max=%d\n",index);
    check[index]=-1;
    //printf("printing check array");
    /*for(int i=0;i<size;i++)
    {
        printf("%d ",check[i]);
    }*/
    //printf("\n");
    c--;
    //printf("c=%d",c);
    while(c>0)
    {
        int index=max_index(values,size,check);
        //printf("index of max=%d\n",index);
        int f=0;
        for(int i=0;i<size;i++)
        {
            if(check[i]==-1)
            {
                //printf("index %d has -1 in check\n",i);
                if((start_time[i]>start_time[index]&&start_time[i]>=end_time[index])||(end_time[i]<=start_time[index]&&end_time[i]<end_time[index]))
                {
                    continue;
                }
                else
                {
                    f=1;
                    break;
                }
                //printf("index %d has  f=%d\n",i,f);
            }
        }
        if(f==1)
            check[index]=-2;
        else
            check[index]=-1;
        /*for(int i=0;i<size;i++)
    {
        printf("%d ",check[i]);
    }*/
        c--;

    //printf("\n");
    }
    for(int i=0;i<size;i++)
    {
        if(check[i]==-2)
            printf("%d ",values[i]);
    }

    return 0;
}
