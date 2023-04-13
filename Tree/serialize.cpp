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

void serialize(Node *root, vector<int> &v)
{
       if (root != NULL)
              v.push_back(root->key);
       else
       {
              v.push_back(-1);
              return;
       }
       serialize(root->left, v);
       serialize(root->right, v);
}

Node *deserialize(vector<int> &v ,int &index)
{
       if (index == v.size())
       {
              return NULL;
       }
       int val = v[index];
       index++;
       if(val==-1)
       {
              return NULL;
       }
       Node *root = new Node(val);
       
       root->left=deserialize(v,index);
       root->right=deserialize(v,index);
       return root;
       

}
void preorder(Node *root)
{
       if(root!=NULL)
       {
              cout<<root->key<<" ";
              preorder(root->left);
              preorder(root->right);
       }
}
int main()
{
       Node *root = new Node(1);
       root->left = new Node(2);
       root->right = new Node(3);
       root->right->left = new Node(4);
       root->right->right = new Node(5);
       vector<int> v;
       serialize(root,v);
         for(int i=0;i<v.size();i++)
         {
              cout<<v[i]<<" ";
         }
         int index=0;
         Node *rootnew=deserialize(v,index);
         cout<<"\n";
         preorder(rootnew);
       return 0;
}
