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

int countNodes(Node *root)
{      int lh = 0, rh = 0;
       Node *curr = root;
       while (curr != NULL)
       {
              lh++;
              curr = curr->left;
       }
       curr = root;
       while (curr != NULL)
       {
              rh++;
              curr = curr->right;
       }
       if (lh == rh)
       {
              return pow(2, lh) - 1;
       }
       else
       {
              return 1 + countNodes(root->left) + countNodes(root->right);
       }
}
int main()
{
       Node *root = new Node(30);
       root->left = new Node(40);
       root->right = new Node(60);
       root->left->left = new Node(80);
       root->left->right = new Node(70);
       cout << countNodes(root);
       return 0;
}