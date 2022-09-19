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
void levelOrder(Node * root){
       if(root==NULL){return;}
       queue<Node *>q;
       q.push(root);


       while(q.empty()==false){
       Node * curr=q.front();
       q.pop();
       cout<<curr->key<<" ";
       if(curr->left!=NULL){q.push(curr->left);}
       if(curr->right!=NULL){q.push(curr->right);}

       }

}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  levelOrder(root);
  return 0;
}
