import java.util.*;
class Main
{
  static int Largestpower(int n, int p) 
    { 
        int ans = 0; 
        while (n > 0) 
        { 
            n /= p; 
            ans += n; 
        } 
        return ans; 
    } 
  
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    while(t-->0)
    {
      int n = sc.nextInt();
      int p = sc.nextInt();
      //int nf = fact(n);
      
      
      
      System.out.println(Largestpower(n,p));
    }
    //System.out.println("Hello World!");
  }
}