#include <bits/stdc++.h>
using namespace std;
struct node{
       int data;
       node*next;
       node(int x)
       {
              data=x;
              next=NULL;
       }
};
// Iterative

// void traverse(node *head)
// {
//    node * temp=head;
//    while(temp!=NULL)
//    {
//       cout<<temp->data<<"\n";
//       temp=temp->next;

//    }
// }

// recursive
void traverse(node *head)
{
       if(head==NULL)
       {
              return;
       }
       cout<<(head->data)<<"\n";
       traverse(head->next);
}
int main(){
   node *head=new node(20);
   head->next=new node(30);
   head->next->next=new node(40);
   traverse(head);

  return 0;
}
