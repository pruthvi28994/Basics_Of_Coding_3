import java.util.*;
import java.util.Scanner;
public class sumofevenodd{
		public static void sumofevod(int[] a){
			int len=a.length;
			int evensum=0,oddsum=0;
			for(int i=0;i<len;i++){
				if(a[i]%2==0)
				     evensum+=a[i];
				else
				     oddsum+=a[i];
			}
			System.out.println("Sum of Even elements:"+evensum+" odd elements:"+oddsum);		
		}
		
		public static void main(String args[]){
			Scanner sc=new Scanner(System.in);
			int n,ele;
			System.out.println("Enter the number of Elements:");
			n=sc.nextInt();
			int[] arrynum=new int[n];
			System.out.println("Enter the elements:");
			for(int i=0;i<n;i++){
				arrynum[i]=sc.nextInt();
			}
			System.out.println("Elements after inserting:");
			for(int i=0;i<n;i++){
				System.out.print(arrynum[i]+" ");
			}
			System.out.println();
			sumofevod(arrynum);
		}
}
