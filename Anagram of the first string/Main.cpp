import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    String s1 = sc.nextLine();
    String s2 = sc.nextLine();
    if(s1.length() != s2.length())
    {
      System.out.print("Not anagrams");
    }
    else
    {
    char[] ch1 = s1.toCharArray();
    char[] ch2 = s2.toCharArray();
    
    Arrays.sort(ch1);
    Arrays.sort(ch2);
    int count=0;
    for(int i=0;i<s1.length();i++)
    {
      if(ch1[i] == ch2[i])
      {
        count++;
      }
    }
    if(count==s1.length())
    {
      System.out.println("Anagram");
    }
    else
    {
      System.out.println("Not anagrams");
    }
    }
  }
}
