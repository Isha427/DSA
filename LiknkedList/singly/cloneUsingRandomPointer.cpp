#include <bits/stdc++.h>
using namespace std;
struct Node
{
       int data;
       Node *next;
       Node *random;
       Node(int x)
       {
              data = x;
              next = NULL;
              random = NULL;
       }
};

void traverse(Node *head)
{
       Node *temp = head;
       while (temp != NULL)
       {
              cout << temp->data << "\n";
              temp = temp->next;
       }
}

Node *addNodes(Node *head)
{
       Node *temp = head;
       while (temp != NULL)
       {
              Node *p = temp->next;
              Node *newNode = new Node(temp->data);
              temp->next = newNode;
              newNode->next = p;
              temp = temp->next->next;
       }
       return head;
}
Node *linkNodes(Node *head)
{
       Node *temp = head;
       while (temp != NULL)
       {
              temp->next->random = temp->random->next;
              temp = temp->next->next;
       }
       Node *original = head, *copy = head->next;

       temp = copy;

       while (original && copy)
       {
              original->next =
                  original->next ? original->next->next : original->next;

              copy->next = copy->next ? copy->next->next : copy->next;
              original = original->next;
              copy = copy->next;
       }

       return temp;
}

int main()
{
       Node *head = new Node(10);
       head->next = new Node(5);
       head->next->next = new Node(20);
       head->next->next->next = new Node(15);
       head->next->next->next->next = new Node(20);

       head->random = head->next->next;
       head->next->random = head->next->next->next;
       head->next->next->random = head;
       head->next->next->next->random = head->next->next;
       head->next->next->next->next->random = head->next->next->next;

       head = addNodes(head);
       head = linkNodes(head);
       traverse(head);

       return 0;

       return 0;
}
