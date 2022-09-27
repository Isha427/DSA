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
bool childrenSum(Node *root){
       if(root==NULL)
       {
              return 0;
       }
       if(root->left==NULL && root->right==NULL)
       {
          return true;
       }
       int sum=0;
       if(root->left !=NULL){sum+=root->left->key;}
       if(root->right !=NULL){sum+=root->right->key;}
       if(sum==root->key && childrenSum(root->left) && childrenSum(root->right)){
              return true;
       }
}
int main(){
 Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(9);
  cout<<childrenSum(root);
  return 0;
}
