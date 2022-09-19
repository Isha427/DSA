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
void inorder(Node * root)
{
       if(root!=NULL)
       {
              inorder(root->left);
              cout<<root->key<<" ";
              inorder(root->right);
       }
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  inorder(root);
  return 0;
}
