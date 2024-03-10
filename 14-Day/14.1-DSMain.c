//
// Created by winht on 3/9/2024.
//
//
// Created by winht on 3/3/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "../N1C_Header/n1cDS.h"
int main(){
    struct Stack_LL_Node_top stack;
    Stack_LL_initialize(&stack);

    Stack_LL_push(&stack,10);
    Stack_LL_push(&stack,20);
    Stack_LL_push(&stack,30);
    Stack_LL_push(&stack,40);
   // struct Stack_LL_Node_top myStack = stack;
    Stack_LL_Get_allData(&stack);

    Stack_LL_push(&stack,60);
    Stack_LL_push(&stack,70);
    Stack_LL_push(&stack,80);
    Stack_LL_Get_allData(&stack);
    printf("\nPeek at Stack %d \n", Stack_LL_peek(&stack));
    printf("Pop data %d\n",Stack_LL_pop(&stack));
    printf("Pop data %d\n",Stack_LL_pop(&stack));
    printf("Pop data %d\n",Stack_LL_pop(&stack));
    printf("Peek at Stack %d \n", Stack_LL_peek(&stack));




}