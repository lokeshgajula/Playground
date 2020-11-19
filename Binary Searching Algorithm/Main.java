import java.util.*;
class Main
{
  static int binSearch(int arr[], int x) 
    { 
        int l = 0, r = arr.length - 1; 
        while (l <= r) { 
            int m = (l + r)/ 2; 
          
            if (arr[m] == x) 
                return m+1; 
          
            if (arr[m] < x) 
                l = m + 1;
          
            else
                r = m - 1;
        }

        return -1; 
    } 
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] a = new int[n];
    for(int i=0;i<n;i++)
    {
      a[i] = sc.nextInt();
    }
    int x = sc.nextInt();
    int i = binSearch(a,x);
    if(i==-1)
    {
      System.out.println("Not found");
    }
    else
    {
      System.out.println(a[i-1] + " is present at location " + i);
    }
  }
}