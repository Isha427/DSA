#include <bits/stdc++.h>
using namespace std;
struct node
{
       char data;
       node *next;
       node(char x)
       {
              data = x;
              next = NULL;
       }
};
// Iterative

void traverse(node *head)
{
       node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}
node* reverseList(node *head){
       node *prev=NULL;
       node*curr=head;
       while(curr!=NULL)
       {
              node * next=curr->next;
              curr->next=prev;
              prev=curr;
              curr=next;

       }
       return prev;

}

bool isPalindrome(node *head)
{
       node *slow = head;
       node *fast = head;
       while (fast != NULL && fast->next != NULL)
       {
              slow = slow->next;
              fast = fast->next->next;
       }
       node*head2=reverseList(slow->next);
       fast=head;
       while(head2!=NULL)
       {
         if(fast->data != head2->data)
         {
              return false;
         } 
         fast=fast->next;
         head2=head2->next;
       }
       return true;
}
int main()
{
       node *head = new node('g');
       head->next = new node('f');
       head->next->next = new node('g');

       if (isPalindrome(head))
              cout << "Yes";
       else
              cout << "No";
       return 0;
}
