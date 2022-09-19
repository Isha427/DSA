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
void distance(Node * root,int k)
{
       if(root==NULL){
              return ;
       }
       if(k==0){
              cout<<root->key<<" ";
       }
       else{
              distance(root->left,k-1);
              distance(root->right,k-1);
       }
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  distance(root,2);
  return 0;
}
