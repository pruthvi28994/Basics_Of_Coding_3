import java.util.Scanner;
class LTI_level{
    
    public static void check_best_price_of_stock(int[] a,int size){
        int min=0;
        int min_price;
        for(int i=1;i<size;i++){
            if(a[min]>a[i]){
                min=i;
            }
        }
        min_price=a[min];
        System.out.println("Min Price of the stock is:"+min_price);
        
    }
    //LTI interview questions
    public static void main (String[] args) {
        int size=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Number of Days");
        size=sc.nextInt();
        int[] a=new int[size];
        System.out.println("enter the array representing the stock price of the Days");
        for(int i=0;i<size;i++){
            a[i]=sc.nextInt();
        }
        System.out.println("stock prices of the day are:");
        for(int i=0;i<size;i++){
            System.out.print(a[i]+" ");
        }
        System.out.println();
        check_best_price_of_stock(a,size);
    }
}