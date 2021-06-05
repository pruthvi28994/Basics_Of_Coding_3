#include<bits/stdc++.h>
using namespace std;

//finds wthere the sum of two elements is equal to entered sum 
void subarraysum(int a[],int s,int size){
	int j;
	for(int i=0;i<size;i++){
		j=i+1;
		while(j<size){
		     if((a[i]+a[j])==s)
		     {
		     	cout<<"[ "<<a[i]<<" "<<a[j]<<" ]";
		     }
		     j++;
		}
	}
	cout<<endl;
}

//checks all possible combination of elements to find sum

int main(){
	int n,sum;
	cout<<"enter the size of the array:";
	cin>>n;
	int *ary=new int[n];
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++){
	     cin>>ary[i];
	}
	cout<<"entered array elements are:\n";
	for(int i=0;i<n;i++){
	     cout<<ary[i]<<" ";
	}
	cout<<endl;
	cout<<"enter the sum:";cin>>sum;
	subarraysum(ary,sum,n);
}
