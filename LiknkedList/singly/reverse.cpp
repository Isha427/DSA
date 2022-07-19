#include <bits/stdc++.h>
using namespace std;
struct node
{
       int data;
       node *next;
       node(int x)
       {
              data = x;
              next = NULL;
       }
};
node * reverse(node * head)
{
       node* temp=head;
       node*prev=NULL;
       while(temp!=NULL)
       {
          node*next=temp->next;
          temp->next=prev;
          prev=temp;
          temp=next;
       }
       return prev;
}
//  node* reverse(node * heads, node*prev)
//  {
//        if(heads==NULL)
//        {
//               return prev;
//        }
//        node*next=heads->next;
//        heads->next=prev;
//        return reverse(next,heads);

//  }
void traverse(node *head)
{
       node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}

int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(40);
       head=reverse(head);
       traverse(head);

       return 0;
}
