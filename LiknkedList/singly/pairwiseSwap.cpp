#include <bits/stdc++.h>
using namespace std;
struct node{
	node*next;
	int data;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
node *pairwiseSwap(node *head)
{      node *curr=head;
       node *prev=head;
       head=head->next;
       while(curr!=NULL && curr->next!=NULL)
	{
	   node*next=curr->next->next;
	   prev->next=curr->next;
	   curr->next->next=curr;
	   prev=curr;
	   curr=next;

	}
	prev->next=curr;
	return head;
}
void traverse(node *head)
{
       if(head==NULL)
       {
              return;
       }
       cout<<(head->data);
       traverse(head->next);
}
int main(){
  	node *head=new node(1);
	head->next=new node(2);
	head->next->next=new node(3);
	head->next->next->next=new node(4);
	head->next->next->next->next=new node(5);
	traverse(head);
	head=pairwiseSwap(head);
	cout<<"\n";
	traverse(head);
	return 0;
  
}
