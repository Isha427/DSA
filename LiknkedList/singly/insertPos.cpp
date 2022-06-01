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
       node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}
node *insert(int pos, int data,node * head)
{      node *temp = new node(data);
       if (head == NULL || pos==1)
       {
              temp->next=head;
              return temp;
              
       }
       int count = 1;
       node* curr=head;
       while (count<pos-1 && curr!=NULL)
       {
              curr = curr->next;
              count++;
       }
      temp->next =curr->next;
       curr->next=temp;
       return head;
}
int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(40);
       head->next->next->next = new node(50);
       head->next->next->next->next = new node(60);
       head = insert(4,45,head);
       traverse(head);

       return 0;
}
