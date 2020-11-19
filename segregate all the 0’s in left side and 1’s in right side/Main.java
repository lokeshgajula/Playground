import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for(int i=0;i<n;i++)
    {
      a[i] = sc.nextInt();
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0)
      {
        cnt++;
      }
    }
    
    for(int i=0;i<n;i++)
    {
      if(i<cnt)
      {
        a[i] = 0;
      }
      else if(i>=cnt)
      {
        a[i] = 1;
      }
    }
    
    for(int i=0;i<n;i++)
    {
      System.out.print(a[i]);
    }
  }
}