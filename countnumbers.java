import java.util.Scanner;
import java.lang.Math;
public class countnumber{
       public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter the Number:");
            int num=sc.nextInt();
            int temp=num;
            int count=0,rem,sum=0;
            while(num>0){
                 //num=num%10;
                 count++;
                 num=num/10;
           }
           num=temp;
           while(num>0){
           	rem=num%10;
           	sum+=Math.pow(rem,count);
           	num/=10;
           }
           if(sum==temp){
           	System.out.println("It is amstrong number");
           }
           System.out.println("there are "+count+" numbers in it");
      }
}
