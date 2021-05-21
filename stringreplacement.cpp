/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string replace_string(string Name,char c)
{
       string newstring="";
       int len=Name.length();
       for(int i=0;i<len;i++)
         {
              if(Name[i]!=c)
                {
                     newstring+=Name[i];
                }
         }
         return newstring;
}
int main()
{
    //printf("Hello World");
    string name;char c;
    cout<<"enter the name:";getline(cin,name);
    cout<<"entered string are :";cout<<name;
    cout<<"\nenter the character to be replaced:";cin>>c;
    cout<<replace_string(name,c);
    return 0;
}