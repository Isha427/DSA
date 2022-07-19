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
//

void middle(node *head)
{
       node *temp = head;
       int count=0;
       while (temp != NULL)
       {
              count++;
              temp = temp->next;
             
       }
       // cout<<count<<"\n";
       int  i=0;
       temp = head;
       // cout<<temp->data;
       while(i<count/2)
       {
              temp=temp->next;
              i++;
       }
       cout<<temp->data;
}

// efficient
// void middle(node *head)
// {
//        if (head == NULL)
//        {
//               return;
//        }
//        node *fast = head;
//        node *slow = head;
//        while (fast != NULL && fast->next != NULL)
//        {
//               slow = slow->next;
//               fast = fast->next->next;
//        }
//        cout << slow->data;
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
       middle(head);

       return 0;
}
