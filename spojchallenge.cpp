#include "bits/stdc++.h"
using namespace std;
// Peter wants to generate some prime numbers for his cryptosystem. Help him!
// Your task is to generate all prime numbers between two given numbers!

// Input
// The input begins with the number t of test cases in a single line (t<=10). 
// In each of the next t lines there are two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

// Output
// For every test case print all prime numbers p such that m <= p <= n, one number per line, 
// test cases separated by an empty line.
int main(){
    int t,m,n;
    bool check=true;
    cin>>t;
    for(int i=0;i<t;i++){
         cin>>m>>n;
         if(m<2) m=2;
         while(m<=n){
             for(int i=2;i<m;i++){
                    if(m%2==0) check=false;
             }
             if(check){
                cout<<m<<endl;
                m++;
            }else {
                check=true;
                m++;
            }
            cout<<endl;
        }
    }
}