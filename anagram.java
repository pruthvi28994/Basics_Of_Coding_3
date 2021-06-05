import java.util.Scanner;
import java.lang.Math;
public class amstrong{
    public static void main(String args[]){
            int num,count=0,num2=0,rem;
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter the Number");
            num=sc.nextInt();
            int temp=num;
            
            while(temp>0){
              temp=temp/10;
              count=count+1;
            }
            temp=num;
            while(temp>0)
            {
               rem=temp%10;
               num2=num2+(int)Math.pow(rem,count);
               temp/=10;
            }
            if(num2==num)
            {  
            System.out.println("entered number is="+num+" amstrong and count is"+count);
            }
         }
}
            
