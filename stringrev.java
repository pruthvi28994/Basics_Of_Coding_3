import java.util.Scanner;
public class stringrev{

		public static void checkpalindrone(String name){
		
			String rev="";
			int len=name.length()-1;
			for(int i=len;i>=0;i--)
			{
			  rev=rev+name.charAt(i);  //charAt is used to return char in string from specified location
			}
			System.out.println("string after reversing is "+rev);
			if(name.equals(rev))
			   System.out.println("String is palindrome");
			else
			   System.out.println("String is not a palindrome");
		
		}
		public static void main(String args[])
		{
			Scanner s=new Scanner(System.in);
			String name;
			System.out.print("enter the string to be reversed=");
			name=s.nextLine();
			name.toUpperCase();
			System.out.println(name);
			checkpalindrone(name);
		}
}
