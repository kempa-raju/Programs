#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node* next;
};


void PrependNode(struct Node **head,int data) 
{

     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     new_node->next = NULL;
     new_node->data = data;

     if(*head == NULL) {
        *head = new_node;
        return;
     }
     new_node->next = *head;
     *head = new_node;     
}

void AppendNode(struct Node **head,int data) 
{
     struct Node* last = *head;
     struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
     new_node->next = NULL;
     new_node->data = data;

     if(*head == NULL) {
        *head = new_node;
        return;
     }
     while(last->next != NULL)
     {
        last = last->next;
     }
     
     last->next = new_node;
      
}
void TravereseList(struct Node *head) 
{
    while(head != NULL)
    {
      printf("Elelement value %d\n",head->data);
      head = head->next;
    }
}

int main()
{
    struct Node* head;
    AppendNode(&head,20);
    PrependNode(&head,15);
    PrependNode(&head,10);
    AppendNode(&head,25);
    AppendNode(&head,30);
    TravereseList(head);
}
