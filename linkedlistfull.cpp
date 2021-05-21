#include<bits/stdc++.h>
#include<malloc.h>
using namespace std;
struct node{
    int info;
    node *link;
};
node* head=NULL;
node* getnode(int x){
      node* temp=(node*)malloc(sizeof(node));
      temp->info=x;
      temp->link=NULL;
      return temp;
}
void insert(int ele){
    node* temp=getnode(ele);
    if(head==NULL)
      {
           head=temp;
      }
    else{
          node* cur=head;
          while(cur->link!=NULL)
           {
                cur=cur->link;
           }
           cur->link=temp;
           cur=temp;
    }
}
void display(){
    node* cur=head;
    while(cur!=NULL)
    {
        cout<<cur->info<<"->";
        cur=cur->link;
    }
    cout<<"NULL\n";
}
void createlist(){
    int i,n,ele;
    cout<<"Enter the Number of Elements into list:";
    cin>>n;
    cout<<"Enter the list Elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>ele;
        insert(ele);
    }
}
void deletefront(){
    if(head==NULL)
    {
         cout<<"LIST IS ALREADY EMPTY\n";
         exit(0);
    }
    node* cur=head;
    cur=head->link;
    free(head);
    head=cur;
}
void deleterear(){
     node* cur=head;
     node* prev=NULL;
     if(head==NULL){
         cout<<"List is EMPTY\n";exit(0);
     }
     while(cur->link!=NULL){
         prev=cur;
         cur=cur->link;
     }
     prev->link=NULL;
     free(cur);
}
void reverselist(){
    node* cur=head;
    node* prev=NULL;
    node* next=NULL;
    while(cur!=NULL)
    {
        next=cur->link;
        cur->link=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}
int main(){
    int ch;
    cout<<"1.createlist\n2.display\n3.deletefront\n4.deleterear\n5.reverselist\n6.exit\n";
    cout<<"Select your choice\n";cin>>ch;
    switch(ch){
        case 1:createlist();
              main();
              break;
        case 2:display();
               main();
               break;
        case 3:deletefront();display();
               main();
               break;
        case 4:deleterear();display();main();
               break;
        case 5:reverselist();main();break;
        case 6:cout<<"---exited successfully-----";exit(0);
               break;
        default:cout<<"-------Enter valid choice------\n";
                exit(0);
    }
}