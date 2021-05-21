#include<iostream>
#include<vector.h>
using namespace std;

int main()
{
         vector<int> a={12,3,4,10,5};
         sort(a.begin(),a.end());
         vector<int>::iterator it;
         for(it=a.begin();it<a.end();it++)
         {
               cout<<*it<<" ";
         }
         a.push_back(23);
         a.push_back(23);
         a.push_back(23);
         it=lower_bound(a.begin(),a.end(),23); 
         cout<<"\n"<<*it;
         it=upper_bound(a.begin(),a.end(),20);//>
         cout<<"\n"<<*it<<"\n";
         
         for(int i:a)
         {
              cout<<i<<" ";
         }
}