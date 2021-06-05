public class constructorex{
		int id;
		String name;
		//default constructor
		
		//parameterized constructor
		constructorex(int id,String name){
			this.id=id;
			this.name=name;
		}
		//these constructor for initializing the copy constructor
		constructorex(constructorex s){
			this.id=s.id;
			this.name=s.name;
		}
		void display(){
			System.out.println(id+" "+name);
		}
		public static void main(String args[]){
			//default constructor
			//constructorex def=new constructorex();
			//def.display();
			//parameterised constructor
			constructorex param=new constructorex(1,"pruthvi");
			param.display();
			
			//there is no copy construcor in java but we can copy the constructor by
			System.out.println("this is copy constructor");
			constructorex copy=new constructorex(param);
			copy.display();
		}
}
		
			
