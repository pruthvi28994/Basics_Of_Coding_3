import java.util.*;
public class excptest{
		public static void main(String args[]){
			int[] a={1,2,3,4};
			try{
				System.out.println("using trycatch block");
				System.out.println(a[0]);
				System.out.println(a[4]);
				int num=50/0;	
			}
			catch(ArrayIndexOutOfBoundsException e){
				System.out.println("array index out of bound");
			}
			catch(ArithmeticException e){
				System.out.println("Divide by zerro error");
			}
			finally{
				System.out.println("this block executed even if try fails");
			}
		}
}
