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
Node * insert(Node *root, int x)
{
       Node *curr = root, *parent = NULL;
       Node *temp = new Node(x);
       while (curr != NULL)
       {
              parent = curr;
              if (curr->key > x)
              {
                     curr = curr->left;
              }
              else if (curr->key < x)
              {
                     curr = curr->right;
              }
              else
              {
                     return root;
              }
              if (parent == NULL)
              {
                     return NULL;
              }
              if (parent->key > x)
              {
                     parent->left = temp;
                     return root;
              }
              else
              {
                     parent->right = temp;
                     return root;
              }
       }
}
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
       Node *root = new Node(30);
       root->left = new Node(40);
       root->right = new Node(60);
       root->left->left = new Node(80);
       root->left->right = new Node(70);
       //  insert(root,90);
        cout<<search(root,90);

       return 0;
}