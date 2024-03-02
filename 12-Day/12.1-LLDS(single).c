//
// Created by winht on 3/2/2024.
//
#include "stdio.h"
#include "stdlib.h"
struct node{
    int data;
    struct node*next;
};

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

int main(){
    struct node *head = NULL;
    struct node* our_node = createNode(20);
    printf("%d",our_node->data);

}