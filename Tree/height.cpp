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
int heights(Node * root)
{
       if(root==NULL){return 0;}
       return max(heights(root->left),heights(root->right))+1;

}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  cout<<heights(root);
  return 0;
}
