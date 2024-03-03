//
// Created by winht on 3/3/2024.
//

#ifndef UK_N1CDS_H
#define UK_N1CDS_H
#include "stdio.h"

//Stack DataStructure Using array
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
//End


#endif //UK_N1CDS_H
