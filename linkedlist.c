#include<stdio.h>
#include<stdlib.h>

struct Node{
	int info;
	struct Node *link;
};
typedef struct Node* Node;     //if we wont use typedef we need use struct node everywhere when make of struct node
Node head=NULL;

Node getnode(int ele){
	Node temp;
	temp=(Node)malloc(sizeof(Node)); 			//in c++ Node temp=new Node();
	temp->info=ele;
	temp->link=NULL;
	return temp;
}

void insertrear(int ele)
{
	Node temp=getnode(ele);
	if(head==NULL)
	   {
	      head=temp;
	   }
	else
	   {
	     Node cur=head;
	     while(cur->link!=NULL)
	     {
	        cur=cur->link;
	     }
	     cur->link=temp; 
	   }
}
void insertfront(int ele)
{
        Node temp=getnode(ele);
        if(head==NULL)
	   {
	      head=temp;
	   }
	 else{
	      temp->link=head;
	      head=temp;
	     }
}

void insertpos(int ele,int pos)
{
	Node cur=head,prd;
	int count=0;
	Node temp=getnode(ele);
        if(head==NULL)
	   {
	      head=temp;
	   }
	else
	{
		while(cur->link!=NULL && count!=pos)
		{
	   	prd=cur;
	   	cur=cur->link;
	   	count++;
		}
	}
	if(pos>count)
	    printf("Invalid postion");
	 else
	    {
	      prd->link=temp;
	      temp->link=cur;
	    }
}
void deleterear()
{
	Node cur=head,prd=NULL;
	while(cur->link!=NULL)
	{ 
	  prd=cur;
	  cur=cur->link;
	}
	free(cur);
	prd->link=NULL;
	printf("\n");
}      

void deletefront()
{
	Node cur=head;
	head=cur->link;
	free(cur);
}  

void deletepos(int pos)
{
      Node cur=head,prd2=NULL,prd1=NULL;
      while(cur->link!=NULL && count!=pos)
      {
           count++;
     	   prd=cur;
           cur=cur->link;
      }
      if(count==pos)
      {
      		
  
void display()
{
	Node cur=head;
	while(cur!=NULL)
	{
	   printf("%d->",cur->info);
	   cur=cur->link;
	}
	printf("NULL\n");
}
void main(){
	int n,ele;
	printf("enter the number of elements to list:");scanf("%d",&n);
	printf("enter the elements into list:\n");
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&ele);
	    insertfront(ele);
	}
	printf("list elements are :\n");
	display();
	insertpos(30,1);
	display();
	deletefront();
	display();
}
