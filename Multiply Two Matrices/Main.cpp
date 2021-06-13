import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int m = sc.nextInt();
    int p = sc.nextInt();
    int q = sc.nextInt();
    if(m!=p)
    {
      System.out.print("The matrix multiplication can't be performed");
    }
    else
    {
    int[][] a = new int[n][m];
    int[][] b = new int[p][q];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        a[i][j] = sc.nextInt();
      }
    }
    for(int i=0;i<p;i++)
    {
      for(int j=0;j<q;j++)
      {
        b[i][j] = sc.nextInt();
      }
    }
    
    int[][] mul = new int[n][q];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<q;j++)
      {
        for(int k=0;k<p;k++)
        {
          mul[i][j] += a[i][k]*b[k][j];
        }
        
      }
    }
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<q;j++)
      {
        System.out.print(mul[i][j] + " ");
      }
      System.out.println();
    }
    
  }
 }
}
