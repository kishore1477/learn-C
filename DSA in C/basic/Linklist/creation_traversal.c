#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node *next;
};

void linklistTraversal(struct Node *ptr){
   while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}
int main(){
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
// allocate all in heap 
head = (struct Node*) malloc(sizeof(struct Node));
second = (struct Node*) malloc(sizeof(struct Node));
third = (struct Node*) malloc(sizeof(struct Node));
fourth = (struct Node*) malloc(sizeof(struct Node));

//😍 link the node 
// link first and  nodes
head->data = 4;
head->next=second;
// link second and third nodes
second->data = 6;
second->next=third;
// link third and fourth nodes
third->data = 16;
third->next=fourth;
// Terminate nodes
fourth->data =27;
fourth->next=NULL;

linklistTraversal(head);

return 0;
}