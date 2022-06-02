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
void traverse(node *head)
{
       node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}
node *reverse(node *head)
{
       node*curr=head;
       node * temp=head;
       while(curr!=NULL)
       {
              temp=curr->prev;
              curr->prev=curr->next;
              curr->next=temp;
              curr=curr->prev;
       }
       return temp->prev;
       
}
int main()
{
       node *head = new node(30);
       head->next = new node(40);
       head->next->prev = head;
       head = reverse(head);
       traverse(head);

       return 0;
}
