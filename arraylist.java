// check wethere the name exists in the list

import java.util.ArrayList;  
public class arraylist {  
    public static void main(String[] args) {  
        String str1 = "Mukesh";  
        ArrayList<String> list = new ArrayList<>();  
        list.add("Ravi");   
        list.add("Mukesh");  
        list.add("Ramesh");  
        list.add("Ajay"); 
        for (String str : list){  
            if (str.equals(str1)) {  
                System.out.println("Mukesh is present");  
            } 
        }
    }  
}  