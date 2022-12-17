#include <bits/stdc++.h>
using namespace std;
struct Node
{
       int key;
       Node *left, *right;
       Node(int k)
       {
              key = k;
              left = NULL;
              right = NULL;
       }
};
void preorder(Node *root)
{
       stack<Node *> s;
       s.push(root);

       while (s.empty() == false)
       {
              Node *curr = s.top();
              s.pop();
              cout << curr->key << " ";
              if(curr->left!=NULL)s.push(curr->right);
              if(curr->right!=NULL)s.push(curr->left);
       }
}
int main()
{
       Node *root = new Node(20);
       root->left = new Node(30);
       root->right = new Node(40);
       root->left->left = new Node(50);
       root->left->right = new Node(60);
       preorder(root);
       return 0;
}
