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

bool detect(node *head)
{
       node *fast = head;
       node *slow = head;
       while (fast != NULL && fast->next != NULL)
       {
           
              fast = fast->next->next;
              slow = slow->next;
              if (slow == fast)
              {
                     return true;
              }
       }
       return false;
}
int main()
{
       node *head = new node(20);
       head->next = new node(30);
       head->next->next = new node(40);
       head->next->next->next = head;

       cout << detect(head);

       return 0;
}
