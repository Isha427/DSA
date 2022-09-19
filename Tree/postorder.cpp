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
void postorder(Node * root)
{
       if(root!=NULL)
       {
              cout<<root->key<<" ";
              postorder(root->left);
              postorder(root->right);
       }
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  postorder(root);
  return 0;
}
