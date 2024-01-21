//
// Created by National Cyber City on 1/20/2024.
//

#include "stdio.h"

int main(){

    int a = 10;
    int *p = &a;
    int **d=&p;

    printf(" address of a %x\n",&a);
    printf(" address of point by pointer  %x\n",p);
    printf(" address of  pointer  %x\n",&p);
    printf(" address of  d point by pointer   %x\n",d);
    printf(" address of  d  pointer   %x\n",&d);



}