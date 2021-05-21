//given the first and second number and Nth position  you have to return the Nth number in the modulo 10000000;
// input 1 2 4
//output 13 bcz 4th position element is 13
import java.util.Scanner;
public class LTI_codinglevel2
{ 
    // 1 , 2 , 3 , 6 , 13  
    public static int check_nth_element(int a,int b,int position){
         int num=3,first=a,Second=b,temp;
         while(num <= position){
              temp=first+Second;
              first=Second;
              second=temp;
              num++;
         }
         return second;
    }
	public static void main(String[] args) {
		int First_num,Second_num,Nth_post;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the First element");First_num=sc.nextInt();
		System.out.println("Enter the Second Element");Second_num=sc.nextInt();
		System.out.println("Enter the Nth Position");Nth_post=sc.nextInt();
		System.out.println(Nth_post+"th Position Element is "+check_nth_element(First_num,Second_num,Nth_post));
	}
}
