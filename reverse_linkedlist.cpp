#include "bits/stdc++.h"
using namespace std;
struct Node{
     int info;
     Node *link;
};
Node* head=NULL;
Node* getnode(int ele){
    Node* temp=new Node();
    temp->info=ele;
    temp->link=NULL;
    return temp;
}
void insert(int ele){
    Node* cur;
    Node* temp=getnode(ele);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        cur=head;
        while(cur->link!=NULL)
        {
            cur=cur->link;
        }
        cur->link=temp;
    }
}
void reverselinkedlist(){
    Node* cur;
    Node* prev=NULL;
    Node* next;
    cur=head;
    while(cur!=NULL)
    {
        next=cur->link;
        cur->link=prev;
        prev=cur;
        cur=next;
    }
    head=prev;
}

void display(){
    Node* cur=head;
    while(cur!=NULL)
    {
        cout<<cur->info<<"=>";
        cur=cur->link;
    }
    cout<<"NULL\n";
}
int main(){
    
    insert(20);
    insert(10);
    insert(2);
    insert(22);
    insert(15);
    display();
    reverselinkedlist();
    cout<<"nodes after swapping \n";
    display();
    
    
    
    
    
}
