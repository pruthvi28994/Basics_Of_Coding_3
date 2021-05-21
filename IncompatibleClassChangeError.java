/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
class Student{  
   	int rollno;//instance variable  
   	String name;  
   	static String college ="NMIT";//static variable  
   	//constructor  
   	Student(int r, String n){  
   		rollno = r;  
   		name = n;  
   	}  
   	//method to display the values  
   	void display(){
   		System.out.println(rollno+" "+name+" "+college);
  	 }  
}  
//Test class to show the values of objects  
public class IncompatibleClassChangeError{  
 		public static void main(String args[]){  
 			Student s1 = new Student(111,"Pruthvi");  
 			Student s2 = new Student(222,"Jayanth");  
 			s1.display();  
 			s2.display();  
 		}  
}