#include <bits/stdc++.h> 
using namespace std; 

struct node { 
	int data; 
	node* next; 
	node (int x){
	    data=x;
	    next=NULL;
	}
}; 



int getIntersection(node * head1, node *head2){
       int count=0;
       node*temp=head1;
       while(temp!=NULL)
       {
              count++;
              temp=temp->next;
       }
       temp=head2;
       int c=0;
       while(temp!=NULL)
       {
              c++;
              temp=temp->next;
       }
       int d=abs(count-c);
       count=0;
       temp=head1;
       node*temp2=head2;
       if(count>c)
       {
       while(count!=d){
          count++;
          temp=temp->next;
         
       }
       }
       else{
          count=0; 
          while(count!=d){
          count++;
          temp2=temp2->next;
         
       }   

       }
       while(temp!=temp2)
       {    temp=temp->next;
            temp2=temp2->next;  
       }
       return temp->data;
       

}

int main() 
{ 
	/* 
		Creation of two linked lists 
	
		1st 3->6->9->15->30 
		2nd 10->15->30 
	
		15 is the intersection point 
	*/

	node* newNode; 

	node* head1 = new node(10); 

	node* head2 = new node(3); 

	newNode = new node(6); 
	head2->next = newNode; 

	newNode = new node(9); 
	head2->next->next = newNode; 

	newNode = new node(16); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

	cout <<getIntersection(head1, head2); 
} 
