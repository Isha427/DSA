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
Node *floor(Node *root,int x)
{      Node * res=NULL;
       while (root != NULL)
       {
           if (root->key == x)
           {
              return root;
           }
           else if(root->key>x)
           {
              root=root->right;
           }
           else{
              res=root;
              root=root->left;
           }
       }
       return res;
}
int main()
{
       Node *root = new Node(30);
       root->left = new Node(40);
       root->right = new Node(60);
       root->left->left = new Node(80);
       root->left->right = new Node(70);
       cout<<(floor(root,41)->key);
       return 0;
}