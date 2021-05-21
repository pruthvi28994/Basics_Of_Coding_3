\#include<stdio.h>
#include<stdlib.h>
int a[10];
int size=5;
int ele;
void insert(){
   		printf("enter number of elements of array:");scanf("%d",&size);
		printf("enter the elements:\n");
   		for(int i=0;i<size;i++)
   		{
   	   	scanf("%d",&a[i]);
   		}
}
void delete(int ele){
		for(int i=0;i<size;i++)
		{
		    if(a[i]==ele)
		      {
		          for(int j=i;j<size;j++){
		              a[j]=a[j+1];
		           }
		           size=size-1;
		           break;
		     }
		 }
}
		      
void insertionsort(int a[]){
	int key,j;
	for(int i=1;i<size;i++)
	{
	   key=a[i];
	   j=i-1;
	   while(j>=0 && a[j]>key)
	   {
	     a[j+1]=a[j];
	     j=j-1;
	   }
	   a[j+1]=key;
	}
}

void bubblesort(int a[]){
	int temp;
	for(int i=0;i<size-1;i++)
	     {
	       for(int j=0;j<size-i-1;j++)
	          {
	             if(a[j]>a[j+1])
	               {
	                  temp=a[j];
	                  a[j]=a[j+1];
	                  a[j+1]=temp;
	                }
	           }
      	     }
}

void selectionsort(int a[]){
	int min,temp;
	for(int i=0;i<size-1;i++)
	 {
	 	min=i;
	 	for(int j=i+1;j<size;j++)
	 	{
	 	   if(a[j]<a[min])
	 	      min=j;            //this loop finds the minimum element index by traversing
	 	}
	 	temp=a[min];
	 	a[min]=a[i];		//if found swaps the index
	 	a[i]=temp;
	 }
}
void display(int a[]){
	for(int i=0;i<size;i++){
	    printf("%d ",a[i]);
	 }printf("\n");
}
void main()
{ 
   int ch;
   printf("1 insert elements\n2 insertion sort \n3 selection sort\n4 bubble sort\n5 display\n6 delete \n7 exit\n");
   printf("enter your choice:");scanf("%d",&ch);
   switch(ch)
   {
   	case 1:insert();
   	       main();
   	       break;
   	case 2:insertionsort(a);
   	       main();
   		break;
   	case 3:selectionsort(a);
   	        main();
   		break;
   	case 4:bubblesort(a);
   	        main();
   		break;
   	case 5:display(a);
   		main();
   		break;
   	case 6:printf("enter the element to be deleted:");scanf("%d",&ele);
   		delete(ele);
   		main();
   		break;
   	case 7:printf("---------exited succesfully--------\n");
   		exit(0);
   		break;
   	default:printf("invalid option");
   }
}