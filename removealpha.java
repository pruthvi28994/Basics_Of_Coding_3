import java.util.Scanner;
public class removealpha{

	public static String removealpha(String n,char a){
		int len=n.length()-1;
		String news="";
		for(int i=0;i<=len;i++)
		{
		   if(a!=n.charAt(i))
		   {
		        news+=n.charAt(i);
		   }
		}
		return news;
	}
		
	public static void main(String ars[]){
		Scanner s=new Scanner(System.in);
		char c;
		String name;
		System.out.println("Enter the string:");
		name=s.nextLine();
		System.out.println("Enter the alphabets that to be removed:");
		c=s.next().charAt(0);
		System.out.println("after removing the element:");
		System.out.println(removealpha(name,c));
	}
}
