//Tech Mahindra Coding Question
//tax of 10% on above purchase of rs 1000 ,given array of amount purchased 
//calculate the total amt of tax imposed on bill
import java.util.Scanner;
import java.util.*;
public class tech_mahindra
{
    public static double check_tax_payable(int[] a){
        double sum=0;
        for(int i:a){
            if(i>1000) { // tax is 0 for bill amount up to Rs 1000
                i-=1000;
                sum=sum+(0.1*i);
            }
        }
        return sum;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int No_of_Items;
		System.out.println("Enter the total Items to be billed");
		No_of_Items=sc.nextInt();
		int[] a=new int[No_of_Items];
		System.out.println("Enter the bill amount of Each Products");
		for(int i=0;i<No_of_Items;i++){
		    a[i]=sc.nextInt();
		}
		System.out.println("Entered Bill Amount are:");
		for(int i : a){
		    System.out.print(i+" ");
		}
		System.out.println();
		System.out.println("total tax for bill is :"+check_tax_payable(a));
	}
}
