//
// Created by winht on 3/3/2024.
//

#ifndef UK_N1CDS_H
#define UK_N1CDS_H
#include "stdio.h"
#include "stdlib.h"

//Stack DataStructure Using array start
#define MAX_SIZE 10
struct Stack{
    int items[MAX_SIZE];
    int top;
};
void arr_initializeStack(struct Stack*stack){

    stack->top = -1;
}
int arr_isFull(struct Stack *stack){
    return (stack->top == MAX_SIZE-1);
}

int arr_isEmpty(struct Stack*stack){
    return (stack->top==-1);
}
void arr_push(struct Stack *stack,int value){
    if (arr_isFull(stack)){
        printf("Stack overFlow!\n");
    } else{
        stack->items[++stack->top]= value;
        printf(" %d pushed value:\n",value);
    }
}
int arr_pop(struct Stack *stack){

    if(arr_isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top--];
    }
}

int arr_peek(struct Stack *stack){

    if(arr_isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top];
    }
}
//End for stack using array
// stack DS using linked List (Singly)
struct Stack_LL_Node{
    int data;
    struct Stack_LL_Node* next;
};
struct Stack_LL_Node_top{
    struct Stack_LL_Node* top;
};

void Stack_LL_initialize(struct Stack_LL_Node_top* stack){
    stack->top = NULL;
}
void Stack_LL_push(struct Stack_LL_Node_top* stack, int data){
    struct Stack_LL_Node* newNode =(struct Stack_LL_Node*) malloc(sizeof(struct Stack_LL_Node));

    if(newNode == NULL){
        perror("Memory Allocation Error!\n");
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("\n %d pushed data to stack!\n",newNode->data);

}
int Stack_LL_is_empty(struct Stack_LL_Node_top* stack){
    return (stack->top==NULL);
}
int Stack_LL_pop(struct Stack_LL_Node_top* stack){
    if(Stack_LL_is_empty(stack)){
        printf("Stack Underflow!\n");
        return -1;
    } else{
        struct Stack_LL_Node* temp = stack->top;
        int data = temp->data;
        stack->top = temp->next;
        free(temp);
        return data;
    }
}
int Stack_LL_peek(struct Stack_LL_Node_top* stack){

    if(Stack_LL_is_empty(stack)){
        perror("Stack is empty!\n");
        return -1;
    } else{
        return stack->top->data;
    }
}
void Stack_LL_Get_allData(struct Stack_LL_Node_top* CopyStack){

//    struct Stack_LL_Node* copyStack =(struct Stack_LL_Node*) malloc(sizeof(struct Stack_LL_Node));
//    if(copyStack==NULL){
//        perror("We can't get any data!\n");
//    }
//    printf("Data on stack->:");
//    while (copyStack->top->data){
//        printf("%d->",copyStack->top->data);
//        if(copyStack->top->next!=NULL) {
//            copyStack->top = copyStack->top->next;
//        } else{
//            return;
//        }
//    }
//    if(copyStack->top->data){
//        printf("%d\n",copyStack->top->data);
//    }
}

// Starting Queue Using LinkedList
struct Queue_LL_Node{ // Que
    int data;
    struct Queue_LL_Node*next;
};

struct Queue_LL_structure{
    struct Queue_LL_Node* front;
    struct Queue_LL_Node* rear;
};

void Queue_LL_initialize(struct Queue_LL_structure* queue){
    queue->front = NULL;
    queue->rear = NULL;
}

int Queue_LL_isEmpty(struct Queue_LL_structure* queue){
    return (queue->front==NULL);
}

void Queue_LL_enqueue(struct Queue_LL_structure* queue, int data){

    struct Queue_LL_Node* newNode =(struct Queue_LL_Node*) malloc(sizeof(struct Queue_LL_Node) );
    if(newNode==NULL){
        printf("Memory Allocation Failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;

    if(Queue_LL_isEmpty(queue)){
        queue->front = newNode;
        queue->rear = newNode;

    } else{
        queue->rear->next = newNode;
        queue->rear = newNode;

    }
    printf("\nEnqueue Process Complete! %d\n",data);
}

int Queue_LL_Dequeue(struct Queue_LL_structure* queue){

    if(Queue_LL_isEmpty(queue)){
        printf("Queue UnderFlow!\n");
        return -1;
    }

    struct Queue_LL_Node* temp = queue->front;
    int data = temp->data;

    queue->front = temp->next;
    free(temp);
    return data;

}

int Queue_LL_Peek(struct Queue_LL_structure* queue){

    if(Queue_LL_isEmpty(queue)){
        printf(" Queus is Empty!\n");
        return -1;
    } else{
        return queue->front->data;
    }
}
// End of Queue

// Starting normal Tree

struct Tree_normal_node{
    int data;
    struct Tree_normal_node* left;
    struct Tree_normal_node* right;
};

struct Tree_normal_node* createNode(int data){
    struct Tree_normal_node* newNode=(struct Tree_normal_node*)malloc(sizeof(struct Tree_normal_node));
    if(newNode==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left=NULL;
    newNode->right = NULL;

    return newNode;
}

struct Tree_normal_node* insertNode(struct Tree_normal_node* root, int data){

    if(root==NULL){
        return createNode(data);
    }
    if(data< root->data){
        root->left = insertNode(root->left,data);
    } else{
        root->right = insertNode(root->right,data);
    }

    return root;
}

void Tree_normal_inorderTraversal(struct Tree_normal_node* root){

    if(root !=NULL){
        Tree_normal_inorderTraversal(root->left);
        printf("-%d-",root->data);
        Tree_normal_inorderTraversal(root->right);
    }


}


#endif //UK_N1CDS_H
