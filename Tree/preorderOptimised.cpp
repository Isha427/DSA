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
       Node *curr = root;
       stack<Node *> s;

       while (curr != NULL || s.empty() == false)
       {
              while (curr != NULL)
              {
                     if (curr->right != NULL)
                     {
                            s.push(curr->right);
                     }
                     cout << curr->key << " ";
                     curr = curr->left;
              }

              if (s.empty() == false)
              {
                     curr = s.top();
                     s.pop();
              }
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
