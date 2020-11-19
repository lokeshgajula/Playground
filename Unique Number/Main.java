import java.util.*;
class Main
{
  static boolean digits(int n)
  {
    ArrayList<Integer> l = new ArrayList<Integer>();
    int m = n;
    while(m>0)
    {
      int temp = m%10;
      l.add(temp);
      m=m/10;
    }
    int s = l.size();
    int count=0;
    for(int i=0;i<s-1;i++)
    {
      if(l.get(i)!=l.get(i+1))
      {
        count++;
      }
    }
    if(l.get(0)!=l.get(s-1))
    {
      count++;
    }
    
    if(count==s)
    {
      return true;
    }
    
    return false;
  }
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int cnt=0;
    for(int i=a;i<b+1;i++)
    {
      if(digits(i))
      {
        cnt++;
      }
    }
    if(cnt==0)
    {
      System.out.println("No Unique Number");
    }
    else
    {
      System.out.println(cnt);
    }
  }
}