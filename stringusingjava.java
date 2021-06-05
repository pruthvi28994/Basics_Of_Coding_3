import java.util.Scanner;
class Main{
    public static String reversing(String str){
        int len=str.length();
        int i=0;
        String newstr="";
        for(i=len-1;i>=0;i--){
            newstr+=str.charAt(i);
        }
        return newstr;
    }
    public static String removenum(String str){
        int len=str.length(),i;
        String newstr="";
        for(i=0;i<len;i++){
            if(Character.isDigit(str.charAt(i)))
                continue;
            else
                newstr+=str.charAt(i);
        }
        return newstr;
    }
    public static String removewhitespace(String str){
        String newstr="";
        int len=str.length(),i;
	newstr=str.replaceAll("\\s","");
        return newstr;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the String:");
        String str=sc.nextLine();
        System.out.println("Entered String is:"+str);
        System.out.println("removing number:"+removenum(str));
        System.out.println("removing white spaces:"+removewhitespace(str));
        System.out.println("String after reversing:"+reversing(str));
    }
}
