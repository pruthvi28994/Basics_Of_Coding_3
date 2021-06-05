//there some variables that remain same for all the objects ,hence instead allocating memory that variable each time 
//make it static ,memory will be allocated only once
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
public class TestStaticVariable1{  
 		public static void main(String args[]){  
 			Student s1 = new Student(111,"Pruthvi");  
 			Student s2 = new Student(222,"Jayanth");  
 			s1.display();  
 			s2.display();  
 		}  
}
