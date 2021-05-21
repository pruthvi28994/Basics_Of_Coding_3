#include<bits/stdc++.h>
using namespace std;
void reversear(int a[],int strt,int end)
 {  
         while(strt<end)
        {
            int temp=a[strt];
            a[strt]=a[end];
            a[end]=temp;
            strt++;end--;
        }
}
int main()
{       
    int temp=0,i=0;
        int a[]={12,14,15,10};
        int s=sizeof(a)/sizeof(a[0]);
        for(i=0;i<s;i++)
         {
                cout<<a[i]<<" ";
         }
        cout<<endl;
        reversear(a,0,s-1);
        for(int x:a)
           cout<<x<<" ";
        
}
