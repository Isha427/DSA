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
int diameter(Node *root)
{
       // int res = 0;
       if (root == NULL)
       {
              return 0;
       }
       int lh = diameter(root->left);
       int rh = diameter(root->left);
       // res = max(lh + rh + 1, res);
       return 1 + max(lh, rh);
}
int main()
{
       Node *root = new Node(30);
       root->left = new Node(40);
       root->right = new Node(60);
       root->left->left = new Node(80);
       root->left->right = new Node(70);
       root->right->left = new Node(100);
       cout << diameter(root);
       return 0;
}