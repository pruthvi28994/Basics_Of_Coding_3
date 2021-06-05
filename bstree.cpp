#include<bits/stdc++.h>
using namespace std;
struct Node{
    int info;
    Node *llink;
    Node *rlink;
};

Node* getnode(int ele)
{
	Node* temp=new Node();//(Node*)malloc(sizeof(Node));
	temp->info=ele;
	temp->llink=NULL;
	temp->rlink=NULL;
	return temp;
}
Node* insert(Node* root,int ele)
{
	if(root==NULL)
	  {
	     root=getnode(ele);
	   }
	else if(ele<=root->info)
	       {
	           root->llink=insert(root->llink,ele);
	       }
	else 
	       {
	          root->rlink=insert(root->rlink,ele);
	       }
	return root;
}           
void preorder(Node* root)
{
	if(root==NULL) return;
	cout<<root->info<<" ";
	preorder(root->llink);
	preorder(root->rlink);
}

void inorder(Node* root)
{
	if(root==NULL) return;
	inorder(root->llink);
	cout<<root->info<<" ";
	inorder(root->rlink);
}

void postorder(Node* root)
{
	if(root==NULL) return;
	postorder(root->llink);
	postorder(root->rlink);
	cout<<root->info<<" ";
}
	     
int main()
{
    int ele,n;
    Node* root=NULL;
    cout<<"Enter the Number of elements:";cin>>n;
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        root=insert(root,ele);
    }
    cout<<"pre-order traversal :";preorder(root);cout<<endl;
    cout<<"in-order traversal :";inorder(root);cout<<endl;
    cout<<"post-order traversal :";postorder(root);cout<<endl;
}
