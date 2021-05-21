/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
     char str1[30];
      cout<<"enter the character string:";gets(str1);
      cout<<"entered character string are:"<<puts(str1) <<"\n";
     string strng1="this is string 2";
     string strng2=" and string 2";
     cout<<"Hello World\n";
     string strng3=strng1+strng2;
     cout<<"concatnation: "<<strng3;
     cout<<"\nsize of string 1 : "<<strng1.size()<<" and string 2 : "<<strng2.size()<<" and string 3 : "<<strng3.size();
     
     cout<<"\nsize of character "<<strlen(str1);

    return 0;
}
