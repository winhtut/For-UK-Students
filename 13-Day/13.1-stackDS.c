//
// Created by winht on 3/3/2024.
//
#include "stdio.h"
#include "stdlib.h"
#include "../N1C_Header/n1cDS.h"
int main(){

    struct Stack stack;
    arr_initializeStack(&stack);
    arr_peek(&stack);
    arr_push(&stack,10);
    arr_push(&stack,20);
    arr_push(&stack,30);
    arr_push(&stack,40);
    printf("The top value of stack %d\n", arr_peek(&stack));
    printf("Pop value %d\n",arr_pop(&stack));
    printf("The top value of stack %d\n", arr_peek(&stack));
    printf("Pop value %d\n",arr_pop(&stack));
    printf("Pop value %d\n",arr_pop(&stack));

}