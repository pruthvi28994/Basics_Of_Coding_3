import java.util.Scanner;
public class removevowels{
		public static String remove(String n){
			int len=n.length();
			String news="";
			
			//n.replaceAll('[AaEeIiOoUu]','*')';
			
			for(int i=0;i<len;i++)
			  {
			     if(n.charAt(i)=='A' || n.charAt(i)=='a' || n.charAt(i)=='E' ||n.charAt(i)=='e'|| n.charAt(i)=='i' || n.charAt(i)=='I' ||n.charAt(i)=='O'|| n.charAt(i)=='o' || n.charAt(i)=='U' || n.charAt(i)=='u')
			     {
			        continue; //or we can make it without if by n.replace(n.charAt(i),'x');
			     }
			     else
			        news+=n.charAt(i);
			   }
			   
			 return news;
		}	
		public static void main(String args[])
		{
		 String sen;
		 Scanner s=new Scanner(System.in);
		 System.out.print("Enter the sentence=");
		 sen=s.nextLine();
		 System.out.println("Sentence before removing vowels "+sen);
		 System.out.println("Sentence after removal of vowels "+remove(sen));
		}
}	
