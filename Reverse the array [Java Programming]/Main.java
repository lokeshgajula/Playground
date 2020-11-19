import java.util.Scanner;
class Main
{
   public static void main(String args[])
   {
	int counter, i=0, j=0, temp;
	int number[] = new int[100];
	Scanner scanner = new Scanner(System.in);
	counter = scanner.nextInt();
	for(i=0; i<counter; i++)
	{
	    number[i] = scanner.nextInt();
	}
	j = i - 1;     
	i = 0;         
	scanner.close();
	//Try out your code here
	for(i=counter-1;i>=0;i--)
	{
	   System.out.print(number[i]+ "  ");
	}       
   }
}
    