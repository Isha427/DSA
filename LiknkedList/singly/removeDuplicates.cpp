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
void traverse(node *head)
{
       if(head==NULL)
       {
              return;
       }
       cout<<(head->data)<<"\n";
       traverse(head->next);
}


node* duplicate(node *head)
{
      
       node*temp=head;
       while( temp->next!=NULL)
       {
              if(temp->data==temp->next->data)
              {      node*p=temp->next;
                     temp->next=temp->next->next;
                     delete(p);
              }
             
              temp=temp->next;
              
              

       }
       return head;
}
int main()
{
       node *head = new node(20);
       head->next = new node(20);
       head->next->next = new node(10);
       head->next->next->next = new node(10);
       head->next->next->next->next = new node(90);
       head->next->next->next->next->next = new node(90);
       head->next->next->next->next->next->next = new node(0);
       head=duplicate(head);
       traverse(head);

       return 0;
}
