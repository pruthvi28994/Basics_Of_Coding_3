#include<stdio.h>
int a[10];
void main(){
        int n,counte=0,counto=0;
	printf("enter the number of elements:");scanf("%d",&n);
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		     counte++;
		else
		     counto++;
	}
	printf("there are %d even and %d odd numbers\n",counte,counto);
}
	
