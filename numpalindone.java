import java.util.Scanner;
public class numpalindone{
     public static void main(String args[])
      {
         int num,num2=0,num3=0,rem=0;
         Scanner sc=new Scanner(System.in);
         System.out.print("Enter the Number=");num=sc.nextInt();
         num2=num;
         while(num2>0)
         {
            rem=num2%10;
            num3=num3*10+rem;
            num2/=10;
         }
         if(num==num3)
            System.out.println(num+" is a palindrome number");
         else
           System.out.println(num+" is not a palindrome number");
      }
}
