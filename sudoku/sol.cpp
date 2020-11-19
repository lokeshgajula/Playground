#include <iostream>
#include<bits/stdc++.h>
#include<set>
#include<iterator>
using namespace std;
int sol[10][10];
int check(int arr[10][10])
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(arr[i][j]==-1)
                return 0;
        }
    }
    return 1;
}
int find(int arr[10][10],int i,int j)
{
    int sum=0;
    set<int> s;
    set <int> :: iterator itr;
    int q1=(i-1)/3;
    int q2=(j-1)/3;
    for(int i=q1*3+1;i<=q1*3+3;i++)
    {
        for(int j=q2*3+1;j<=q2*3+3;j++)
        {
            if(arr[i][j]!=-1)
                s.insert(arr[i][j]);
        }
    }
    for(int k=1;k<=9;k++)
    {
        if(arr[k][j]!=-1)
            s.insert(arr[k][j]);
        if(arr[i][k]!=-1)
            s.insert(arr[i][k]);
    }
    if(s.size()!=8)
        return -1;
    else
    {
         for (itr = s.begin(); itr != s.end(); ++itr)
    {
        sum+=*itr;
    }
    return 45-sum;
    }

}
int main()
{
    int e=1,q1,q2,r,demo[10][10];
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            cout<<endl<<"enter sudoku of ["<<i<<"]["<<j<<"]=";
            cin>>demo[i][j];
            sol[i][j]=demo[i][j];
        }
    }
    //int demo[10][10]={{0,0,0,0,0,0,0,0,0},{0,4,-1,3,6,-1,-1,-1,-1,-1},{0,-1,5,-1,9,-1,-1,-1,-1,-1},{0,-1,-1,6,-1,-1,-1,-1,4,-1},{0,7,-1,-1,-1,9,5,1,-1,2},{0,-1,-1,5,-1,-1,1,-1,7,9},{0,-1,1,9,-1,6,7,-1,3,8},{0,5,6,8,-1,2,4,9,-1,3},{0,3,4,-1,5,-1,9,-1,8,7},{0,1,-1,-1,-1,8,-1,2,-1,-1}};
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(demo[i][j]!=-1){
            cout<<demo[i][j]<<"|";}
            else
                cout<<" "<<"|";
        }
        cout<<endl<<"------------------"<<endl;
    }
    while(!check(demo)&&e)
    {
        for(int i=1;i<=9;i++)
        {
            for(int j=1;j<=9;j++)
            {
                if(demo[i][j]==-1)
                {
                    //q1=(i-1)/3;
                    //q2=(j-1)/3;
                    r=find(demo,i,j);
                    if(r!=-1)
                    {
                        demo[i][j]=r;
                    }
                }
            }
        }
    }
    cout<<endl<<endl;
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(demo[i][j]!=-1){
            cout<<demo[i][j]<<"|";}
            else
                cout<<" "<<"|";
        }
        cout<<endl<<"------------------"<<endl;
    }
    return 0;
}
