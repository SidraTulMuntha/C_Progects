#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node* next;
    };

//this fuction print the content of linked list 
void display(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d",n->data);
        n=n->next;
    }
}
int main()
{
// allocate 3 nodes in the heap .  
struct node* head=NULL;
struct node* second=NULL;
struct node* third=NULL;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
// assign data to the first node .
head->data=5;
// linked the node with second   
head->next=second;
 // assign data to the second node . 
second->data=10;
// linked the node with third .  
second->next=third;
// assign data to the third node .  
third->data=15;
third->next=NULL;
display(head);
return 0;
}
