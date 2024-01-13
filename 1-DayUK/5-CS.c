//
// Created by National Cyber City on 1/13/2024.
//
#include "stdio.h"

int main(){
    int age=0;
    printf("This is program 5:\n");

    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<=19){
        printf("You Can't play!\n");
    } else{
        printf("You can !");
    }


    return 0;
}
