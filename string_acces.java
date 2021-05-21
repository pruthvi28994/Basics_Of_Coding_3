public class string_acces{  
            public static void main(String args[]){  
                        // String s1="java";//creating string by java string literal  
                        // char ch[]={'s','t','r','i','n','g','s'};  
                        // String s2=new String(ch);//converting char array to string  
                        // // String s3=new String("example");//creating java string by new keyword  
                        // System.out.println(s1);  
                        // System.out.println(s2);  
                        // System.out.println(s3);  
                        String s1="hello";  
                        String s2="hello";  
                        String s3="meklo";  
                        String s4="hemlo";  
                        String s5="flag";  
                        System.out.println(s1.compareTo(s2));//0 because both are equal  
                        System.out.println(s1.compareTo(s3));//-5 because "h" is 5 times lower than "m"  
                        System.out.println(s1.compareTo(s4));//-1 because "l" is 1 times lower than "m"  
                        System.out.println(s1.compareTo(s5));//2 because "h" is 2 times greater than "f"
            }
    
}