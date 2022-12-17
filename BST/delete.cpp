#include <bits/stdc++.h>
using namespace std;
struct Node
{
       int key;
       Node *left;
       Node *right;
       Node(int k)
       {
              key = k;
              left = NULL;
              right = NULL;
       }
};
void deletes(Node * root,int x)
{
   if(root!=NULL)
   {
       return 0;
   }  
   if(root->key >x)
   {
       root->left=deletes(root->left,x);
   }  
   else if(root->key<x)
   {
       root->right=deletes(root->right,x);
   }
   else{
       if(root->left==NULL)
       {
          Node *temp=root->right;
          deletes(root);
          return temp;

       }
        if(root->right==NULL)
       {
          Node *temp=root->left;
          deletes(root);
          return temp;

       }
       else{
              Node * succ=successor(root);
              succ->key=root->key;
              root->right=deletes(root->right,succ->key);
       }
   }

}
int main()
{
       Node *root = new Node(30);
       root->left = new Node(40);
       root->right = new Node(60);
       root->left->left = new Node(80);
       root->left->right = new Node(70);
       

       return 0;
}