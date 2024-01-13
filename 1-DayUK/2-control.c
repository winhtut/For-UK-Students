//
// Created by National Cyber City on 1/13/2024.
// Arithmetic
// z = x+y
#include "stdio.h"

int main(){
    int first=0;
    int second=0;
    int total=0;
    printf("Hello This is program 2!\n"); // new line
    printf("Enter first number:");
    scanf("%d",&first);

    printf("Enter your second number:");
    scanf("%d",&second);

    total = first+second;
    printf("This is your two number:%d - %d \n",first, second);
    printf("This is total number: %d",total);

    return 0;
}