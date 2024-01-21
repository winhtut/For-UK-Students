//
// Created by National Cyber City on 1/20/2024.
//

#include "stdio.h"

int main(){
    // pointer store address of another variable ;
    int a= 10;
    int *p = &a;

    printf(" address of a  %x\n",&a);
    printf(" address point by pointer  %x\n",p);
    printf(" address of pointer p   %x\n",&p);

}