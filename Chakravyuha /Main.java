#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i, j, count = 0, index = 2;
  int arr[n][n];
  int points[10000];
  points[0] = 0, points[1] = 0;
  //to know how many spiral i am going to form
  for(i = 0; i <(n+1)/2; i++)
  {
    //to move rightwards
    for(j = i; j <= n-i-1; j++)
    {
      arr[i][j] = ++count;
      if(count % 11 == 0)
      {
        points[index++] = i;
        points[index++] = j;
      }
    }
    //to move downwards
    for(j = i+1; j <= n-i-1; j++)
    {
      arr[j][n-i-1] = ++count;
      if(count % 11 == 0)
      {
        points[index++] = j;
        points[index++] = n-i-1;
      }
    }
    //to move leftwards
    for(j = n-i-2; j>= i; j--)
    {
      arr[n-i-1][j] = ++count;
      if(count % 11 == 0)
      {
        points[index++] = n-i-1;
        points[index++] = j;
      }
    }
    //to move upwards
    for(j = n-i-2; j>i; j--)
    {
      arr[j][i] = ++count;
      if(count % 11 == 0)
      {
        points[index++] = j;
        points[index++] = i;
      }
    }
  }
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      cout << arr[i][j] << "\t";
    }
    cout << "\n";
  }
  //print the total power point values
  cout << "Total Power points : " << index/2 << endl;
  //printing all the power point values
  for(int  i = 0; i < index; i+=2)
  {
    cout << "(" <<points[i] << ", " << points[i+1] <<")";
    cout << endl;
  }
  return 0;
}