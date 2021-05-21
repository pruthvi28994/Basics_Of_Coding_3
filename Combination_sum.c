/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int sum=0;
    printf("Hello World\n");
    int a[]={12,1,15,8,4,6,2};
    int size=sizeof(a)/sizeof(a[0]);
    printf("%d\n",size);
    printf("Combinatioon sum...\n");
    printf("enter the sum:");scanf("%d",&sum);
    printf("[ ");
    for(int i=0;i<size;i++)
     {     
             if(a[i]==sum)
                       {
                             printf("%d ",a[i]);
                             continue;
                       } 
            for(int j=i;j<size;j++)
               {
                   
                      if(sum==(a[i]+a[j]))
                         {
                               printf("%d %d",a[i],a[j]);
                         }
               }
     }printf(" ]\n");
    return 0;
}
