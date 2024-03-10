//
// Created by winht on 3/10/2024.
//
#include "../N1C_Header/n1cDS.h"
#include "stdio.h"


int main(){

    printf("This is testing for Queue!\n");
    struct Queue_LL_structure queue;
    Queue_LL_initialize(&queue);

    Queue_LL_enqueue(&queue,100);
    Queue_LL_enqueue(&queue,200);
    Queue_LL_enqueue(&queue,300);
    Queue_LL_enqueue(&queue,400);


}