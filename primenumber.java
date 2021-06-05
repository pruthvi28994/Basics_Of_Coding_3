import java.util.Scanner;
public class primenumber{
public static void checkprime(int n){
            if(n==1 || n==0)
               System.out.println(n+" is neithere a prime not a prime number");
            boolean flag=true; 
            for(int i=2;i<=n/2;i++)
               {
                  if(n%i==0)
                     {
                       flag=false;
                       break;
                     }
               }
            if(flag==true)
                System.out.println(n+" is a prime number");
            else
                System.out.println(n+" is not a prime number");
      }
        public static void main(String args[])
        {
           int num;
           Scanner s=new Scanner(System.in);
           System.out.print("Enter the number=");num=s.nextInt();
           checkprime(num);
        }
}          
