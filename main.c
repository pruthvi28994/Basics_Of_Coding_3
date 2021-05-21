/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int x=12,y=13,i=0;
    x++;
    ++y;
    (++i)?printf("%d\n",++i):printf("%d\n",i);
    printf("x=%d and y=%d ",x++,++y);
    i=1250;
    printf("\n%d",'a');
    printf("\n%d",printf("\n%d",i));
    printf("\n%d", printf("\n%d", printf("\n%d", i)));
}
