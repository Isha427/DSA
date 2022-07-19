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
//efficient

void nth(node*head,int n)
{
       node *temp = head;
       node*fast=head;
       node*slow=head;
       for(int i=0;i<n;i++)
       {
              fast=fast->next;
       }
       while(fast!=NULL)
       {
              fast=fast->next;
              slow=slow->next;
       }
       cout<<slow->data<<"\n";
}

// naive
// void nth(node *head,int n)
// {
//        if (head == NULL)
//        {
//               return;
//        }
//        int count=0;
//        node *temp=head;
//       while(temp!=NULL)
//        {
//               count++;
//               temp=temp->next;
//        }
//        temp=head;
//        for(int i=0;i<count-n;i++)
//        {
//               temp=temp->next;
//        }
//        cout<<temp->data;
// }
int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(10);
       head->next->next->next = new node(50);
       head->next->next->next->next = new node(90);
       head->next->next->next->next->next = new node(40);
       head->next->next->next->next->next->next = new node(80);
       nth(head,2);

       return 0;
}
