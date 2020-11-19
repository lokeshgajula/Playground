#include <iostream>

using namespace std;
int lcs_array[100][100];
string lcs(string X,string Y,int len1,int len2)
{
    if(len1==0|| len2==0)
        return string("");
    if(X[len1-1]==Y[len2-1])
        return lcs(X,Y,len1-1,len2-1)+X[len1-1];
    if(lcs_array[len1-1][len2]>lcs_array[len1][len2-1])
        return lcs(X,Y,len1-1,len2);
    else
        return lcs(X,Y,len1,len2-1);
}
int lcs_length(string X,string Y)
{
    int len1=X.length();
    int len2=Y.length();
    for(int i=0;i<=len1;i++)
    {
        lcs_array[i][0]=0;
    }
    for(int j=0;j<=len2;j++)
    {
        lcs_array[0][j]=0;
    }
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(X[i-1]==Y[j-1])
                lcs_array[i][j]=1+lcs_array[i-1][j-1];
            else
                lcs_array[i][j]=max(lcs_array[i-1][j],lcs_array[i][j-1]);
        }
    }
    return lcs_array[len1][len2];
}
int main()
{
    string X,Y;
    cin>>X;
    cin>>Y;
    cout<<lcs_length(X,Y);
    //cout<<"longest common subsequence is"<<lcs(X,Y,X.length(),Y.length());
    return 0;
}
