#include"bits/stdc++.h"
using namespace std;
int main(){
    int input_Num1;
    int input_Num2;
    int outPut,LastDigit,rev_num=0,temp;
    cout<<"Enter the NUmber:";cin>>input_Num1;
    temp=input_Num1;
    while(input_Num1>0)
    {
            LastDigit=input_Num1%10;
            rev_num=rev_num*10+LastDigit;
            input_Num1/=10;
    }
    input_Num1=temp;
    input_Num2=rev_num;
    cout<<input_Num1<<"-"<<input_Num2 <<"="<<input_Num1-input_Num2;
}