//
// Created by winht on 3/3/2024.
//
#include "stdio.h"
#include "stdlib.h"
#define MAX_SIZE 10
struct Stack{
    int items[MAX_SIZE];
    int top;
};
void initializeStack(struct Stack*stack){

    stack->top = -1;
}
int isFull(struct Stack *stack){
    return (stack->top == MAX_SIZE-1);
}

int isEmpty(struct Stack*stack){
    return (stack->top==-1);
}
void push(struct Stack *stack,int value){
    if (isFull(stack)){
        printf("Stack overFlow!\n");
    } else{
        stack->items[++stack->top]= value;
        printf(" %d pushed value:\n",value);
    }
}
int pop(struct Stack *stack){

    if(isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top--];
    }
}

int peek(struct Stack *stack){

    if(isEmpty(stack)){
        printf("Stack is Empty!\n");
        return -1;
    } else{
        return stack->items[stack->top];
    }
}
int main(){

    struct Stack stack;
    initializeStack(&stack);
    peek(&stack);
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    printf("The top value of stack %d\n", peek(&stack));
    printf("Pop value %d\n",pop(&stack));
    printf("The top value of stack %d\n", peek(&stack));
    printf("Pop value %d\n",pop(&stack));
    printf("Pop value %d\n",pop(&stack));

}