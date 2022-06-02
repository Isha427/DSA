#include <bits/stdc++.h>
using namespace std;
struct node
{
       int data;
       node *prev;
       node *next;
       node(int x)
       {
              data = x;
              prev = NULL;
              next = NULL;
       }
};
void traverse(node * head)
{
       node *temp=head;
       while(temp!=NULL)
       {      cout<<temp->data<<"\n";
              temp=temp->next;
       }
}
node *deleted(node *head)
{
       node *temp = head;
       while(temp->next->next!=NULL)
       {
              temp=temp->next;

       }
       temp->next=NULL;
       delete(temp->next);
       return head;


}
int main()
{
       node *head = new node(30);
       head->next = new node(40);
       head->next->prev = head;
       head->next->next = new node(50);
       head->next->next->prev = head->next;
       head=deleted(head);
       traverse(head);

           return 0;
}
