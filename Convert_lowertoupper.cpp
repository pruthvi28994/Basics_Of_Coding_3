#include"bits/stdc++.h"
using namespace std;

int main(){
    string input1="";
    string input2="";
    cout<<"enter the string:";getline(cin,input1);
    int len=input1.length();
    cout<<len<<endl;
    cout<<input1<<endl;
    for(int i=0;i<len;i++){
        if(islower(input1[i]))
        {
            input2+=toupper(input1[i]);
        }
        else if(isupper(input1[i]))
        {
            input2+=tolower(input1[i]);
        }
        else
            input2+=input1[i];
    }
    cout<<input2;
}