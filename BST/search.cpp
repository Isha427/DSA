// tc=O(h)
#include<bits/stdc++.h>
using namespace std;
struct Node{
   int key;
   Node *left;
   Node * right;
   Node(int k)
   {
       key=k;
       left=NULL;
       right=NULL;
   }
};
bool search(Node * root,int key)
{
   while(root!=NULL)
   {
   if(root->key==key)
   {
       return 1;
   }
   else if(root->key>key)
   {
       root=root->left;
   }
   else{
       root=root->right;
   }
   }
   return false;
   
}
int main()
{
     Node * root=new Node(30);  
     root->left=new Node(40);
     root->right=new Node(60);
     root->left->left=new Node(80);
     root->left->right=new Node(70);
     cout<< search(root,50);
     return 0;
}