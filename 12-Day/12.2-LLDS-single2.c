//
// Created by winht on 3/2/2024.
//
#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node*next;
};

void delete(struct node** head, int key){

    struct node* temp = *head;
    struct node* prev = NULL;

    if(temp != NULL && temp->data==key){
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp !=NULL && temp->data != key){
        prev =temp;
        temp = temp->next;
    }
    if(temp==NULL){
        printf("Not found!\n");
    }
    prev->next = temp->next;
    free(temp);


}
struct node* createNode(int newData){
    struct node* newNode =(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Memory Allocation failed!\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next=NULL;

    return newNode;
}

void insertAtEnd(struct node** head,int newData){
    struct node* newNode = createNode(newData);
    if(*head ==NULL){
        *head = newNode;
        return;
    }
    struct node* temp = *head;
    while (temp->next !=NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}

void printLList(struct node* head){
    struct node* temp=head;
    while (temp!=NULL){

        printf("Data :%d\n",temp->data);
        temp = temp->next;
    }
    printf("Complete!");
}

int main(){
    struct node *head = NULL;

    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    insertAtEnd(&head,50);
    insertAtEnd(&head,60);
    insertAtEnd(&head,70);
    insertAtEnd(&head,80);
    printLList(head);
    delete(&head,60);

}