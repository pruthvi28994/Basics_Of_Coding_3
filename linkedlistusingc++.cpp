#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node* link;
};
struct Node* head=NULL;

Node* getnode(int x)
  {
        Node* temp=new Node();//(Node*)malloc(sizeof(Node));
        temp->data=x;
        temp->link=NULL;
        return temp;
  }
void insert(int x)
  {
   Node* cur;
   Node* temp=getnode(x);
   cur=head;
   if(head==NULL)
    {
         head=temp;
    }
    else
    {
        while(cur->link!=NULL)
          { 
           cur=cur->link;
          }
         cur->link=temp;
    }
}
void display()
 {
    Node* cur=head;
    while(cur!=NULL)
          { 
           cout<<cur->data<<"=>";
           cur=cur->link;
          }
          cout<<"NULL";
 }
int main()
{   
    int ele;
    cout<<"Enter the Elements:";
    for(int i=0;i<5;i++)
    {
          cin>>ele;
          insert(ele);
    }

     display();
     
}