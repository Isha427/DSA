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
       unordered_set<node *> s;
       node *temp = head;
       while (temp != NULL)
       {
              if (s.find(temp) != s.end())
              {
                     return 1;
                     cout << temp->data;
              }
              s.insert(temp);
              temp = temp->next;
       }
       return 0;
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
