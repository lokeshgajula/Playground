import java.util.*;
class Main
{
  
  static int count(int[] a, int n, int sum)
  {
    if(n==0)
    {
      return (sum==0)?1:0;
    }
    return count(a,n-1,sum) + count(a,n-1,sum-a[n-1]);
    
  }
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0)
    {
      int n = sc.nextInt();
      int[] a = new int[n];
      for(int i=0;i<n;i++)
      {
        a[i] = sc.nextInt();
      }
      int sum = sc.nextInt();
      int count=0;
      System.out.println(count(a,n,sum));
      
    }
  }
}
