/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
public class increamentsanddecrement
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		int i=0;
		System.out.println("pre increament");
		for(i=0;i<5;++i)
		  System.out.print(i+" ");
		System.out.println(i);
		System.out.println("post increament");
		for(i=0;i<5;i++)
		  System.out.print(i+" ");
		System.out.println(i);
		
		int x=12,y=13;
		x++;
		++y;
		System.out.println("x="+x+" y="+y);
	}
}
