#include <stdio.h>
struct Node{
int data;
struct Node* next;
struct Node* prev;
};

struct Node* createNode (int data){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
newNode->prev = NULL;
return newNode;
}

void addingNodeHead(struct Node** head, int data){
struct Node* newNode = createNode(data);
newNode->prev = NULL;
if (*head == NULL){
*head = newNode;
newNode->next = NULL;
return;
}
newNode->next = *head;
(*head)->prev = newNode;
*head = newNode;
}

void addingNodeTail(struct Node** head, int data){
struct Node* newNode = createNode(data);
newNode->next = NULL;
if (*head == NULL){
*head = newNode;
newNode->prev = NULL;
return;
}
struct Node* tail = *head;
while (tail->next != NULL){
tail = tail->next;
}
tail->next = newNode;
newNode->prev = tail;
}

void removeHead(struct Node** head){
if (*head == NULL){
return;
}
struct Node* temp = *head;
*head = (*head)->next;
(*head)->prev = NULL;
free(temp);
}

void removeTail(struct Node** head){
if (*head == NULL){
return;
}
//need a case for one node being in the list
struct Node* temp = *head;
while (temp->next->next != NULL){
temp = temp->next;
}
free(temp->next);
temp->next = NULL;
}

int main()
{
struct Node* head = NULL;
addingNodeHead(&head, 10);
addingNodeHead(&head, 20);
addingNodeHead(&head, 40);
addingNodeTail(&head, 70);
struct Node* temp = head;
  while (temp != NULL) {
  printf("%d -> ", temp->data);
  temp = temp->next;
  }
  printf("NULL\n");
  removeHead(&head);
  temp = head;
  while (temp != NULL) {
  printf("%d -> ", temp->data);
  temp = temp->next;
  }
  printf("NULL\n");
  removeTail(&head);
  temp = head;
  while (temp != NULL) {
  printf("%d -> ", temp->data);
  temp = temp->next;
  }
  printf("NULL");
  }
