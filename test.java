import java.util.Scanner;
public class test{
		public static int[] insertionsort(int a[],int size)
		{
			int key,j;
			for(int i=1;i<size;i++)
			{
			   key=a[i];
			   j=i-1;
			   while(j>=0 && a[j]>key)
			   {
			      a[j+1]=a[j]; //sorts by creating virtual block of sorted and unsorted array
			      j=j-1;
			   }
			   a[j+1]=key;
			 }
			return a;
		
		}
		public static int binarysearch(int a[],int size,int ele)
		{
		   int low=0,high=size-1,mid,loc;
		   while(low<high)
		   {
		      mid=(low+high)/2;
		      if(a[mid]==ele)
		           return mid;
		      if(a[mid]<ele)
		          low=mid+1;
		          else
		          high=mid-1;
		   }
		   return -1;
		   
		}
		public static void main(String args[]){
		
			Scanner s=new Scanner(System.in);
			int n;
			int ele,ch;
			System.out.print("Enter the number of elements=");n=s.nextInt();
			int[] a=new int[n];
			System.out.println("Enter the elements=");
			for(int i=0;i<n;i++)
			 {
			    a[i]=s.nextInt();
			 }
			System.out.println("Entered elements are=");
			for(int i=0;i<n;i++)
			{
			    System.out.print(+a[i]+" ");
			}
			System.out.println();
			System.out.println("1 Insertion sort\n2 selection sort\n3 bubble sort\n4 binary search\n5 exit\n6 home");
			System.out.print("enter your choice:");ch=s.nextInt();
			inner:      // labels are used instead of goto to go for perticular section/line
				switch(ch)
				{
				  case 1:insertionsort(a,n);
			  	 	System.out.println("Array elements after sorting ");
			  		 for(int i=0;i<n;i++)
			  	  	{
			  	   	 System.out.print(a[i]+" ");
			  	  	}
			  		break inner;
			 	 case 4:System.out.print("Enter the element to search:");
			  		ele=s.nextInt();
			  		int loc=binarysearch(a,n,ele);
			  		if(loc==-1)
			  		    System.out.print("Element is not present");
			  		else 
			  		    System.out.println("element "+ele+" found at location "+loc);
			  		break inner;
			  	case 5:System.out.println(".........exited succesfully.........");
			  	 	System.exit(0);
			 	case 6:
			               break;
			  	default:System.out.println("............Invalid option..........");
				}
		}
}


