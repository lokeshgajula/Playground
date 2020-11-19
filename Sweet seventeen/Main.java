import java.util.*;
class Main
{
  
  static int pow(int a, int b)
  {
    int res=1;
    for(int i=0;i<b;i++)
    {
      res*=a;
    }
    return res;
  }
  static int dec(char ch)
  {
    if(ch == 'A')
    {
      return 10;
    }
    else if(ch == 'B')
    {
      return 11;
    }
    else if(ch == 'C')
    {
      return 12;
    }
    else if(ch == 'D')
    {
      return 13;
    }
    else if(ch == 'E')
    {
      return 14;
    }
    else if(ch == 'F')
    {
      return 15;
    }
    else if(ch == 'G')
    {
      return 16;
    }
    
    return Integer.parseInt(String.valueOf(ch));
  }
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String str = sc.next();
    int n = str.length();
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum += pow(17,n-1-i)*dec(str.charAt(i));
    }
    System.out.println(sum);
  }
}