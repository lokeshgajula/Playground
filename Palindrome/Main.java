import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String str = sc.next();
    int n = str.length();
    String rev = "";
    for(int i=n-1;i>=0;i--)
    {
      rev+=str.charAt(i);
    }
    if(str.equals(rev))
    {
      System.out.print(1);
    }
    else
    {
      System.out.print(0);
    }
    
  }
}