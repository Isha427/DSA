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
int maxs(Node * root)
{
       if(root==NULL){return INT_MIN;}
       return max(root->key,max(maxs(root->left),maxs(root->right)));
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  cout<<maxs(root);
  return 0;
}
