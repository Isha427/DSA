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
void leftview(Node * root)
{
       if(root==NULL)
       {
              return;
       }
      
       queue<Node *>q;
       q.push(root);
       while(q.empty()==false)
       {
             
              int count=q.size();
           
              for(int i=0;i<count;i++)
              {
                    Node *curr=q.front();
                     q.pop();
                     if(i==0)
                     {
                            cout<<curr->key<<" ";
                     }
                     if(curr->left!=NULL)
                     {
                            leftview(curr->left);
                     }
                      if(curr->right!=NULL)
                     {
                            leftview(curr->right);
                     }

              
              
              }
              
       }
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
 leftview(root);
  return 0;
}
