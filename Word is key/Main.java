import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String str = sc.next();
    String[] s = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    
    boolean flag = false;
    for(int i=0;i<s.length;i++)
    {
      if(str.equals(s[i]))
      {
        flag = true;
        break;
      }
    }
    if(flag==true)
    {
      System.out.print(str + " is a keyword");
    }
    else
    {
      System.out.print(str + " is not a keyword");
    }
  }
}