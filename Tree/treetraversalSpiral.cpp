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
void treeTraversal(Node * root)
{      
       stack<Node*>s1;
       stack<Node*>s2;
       s1.push(root);
       while(!s1.empty() || !s2.empty())
       {
       while(s1.empty()!=true)
       {  Node * temp=s1.top();
          cout<<s1.top()->key<<" ";
          s1.pop();
          if(temp->right){s2.push(temp->right);}
          if(temp->left){s2.push(temp->left);}
          
       }
       while(s2.empty()!=true)
       {
          Node * temp=s2.top();
          cout<<s2.top()->key<<" ";
          s2.pop();
          if(temp->left){s1.push(temp->left);}
          if(temp->right){s1.push(temp->right);}
       }
       }
       


   
}
int main(){
  Node * root =new Node(20);
  root->left=new Node(30);
  root->right=new Node(40);
  root->left->left=new Node(50);
  root->left->right=new Node(60);
  treeTraversal(root);
  return 0;
}
