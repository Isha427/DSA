#include <bits/stdc++.h>
using namespace std;
struct Node{
       int key;
       Node * left,* right;
       Node(int k)
       {
              key=k;
              left=NULL;
              right=NULL;
       }
};
Node * lca(Node * root,int n1,int n2)
{
   if(root==NULL)
   {
       return NULL;
   }   
   if(root->key==n1 || root->key ==n2)
   {
       return root;
   } 
   Node * lh=lca(root->left,n1,n2);
   Node * rh=lca(root->right,n1,n2);
   if(rh!=NULL && lh !=NULL)
   {
       return root;
   }
   if(lh!=NULL)
   {
       return lh;
   }
   else{
       return rh;
   }
   

}
int main(){
 	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
 cout<< (lca(root,20,50))->key;
  return 0;
}
