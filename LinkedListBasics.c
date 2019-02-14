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

void RevereseList(struct Node** head)
{
    struct Node *prev=NULL;
    struct Node *current=*head;
    struct Node *next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev=current;
        current = next;
    }

    *head = prev;

}

void RecurssiveReverse(struct Node** head)
{
     struct Node* first;
     struct Node* rest;
     if(head==NULL)
        return;
    
     first = *head;
     rest = first->next;

     if(rest==NULL)
        return;
     RecurssiveReverse(&rest);

     first->next->next = first;

     first->next = NULL;

     *head = rest;

     
}
int main()
{
    struct Node* head;
    AppendNode(&head,20);
    PrependNode(&head,15);
    PrependNode(&head,10);
    AppendNode(&head,25);
    AppendNode(&head,30);
    //DeleteNode(&head,30);
    TravereseList(head);
    RevereseList(&head);

    TravereseList(head);
    RecurssiveReverse(&head);
    TravereseList(head);

}
