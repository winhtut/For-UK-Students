//
// Created by National Cyber City on 1/14/2024.
// if else elseif control

#include "stdio.h"

int main(){
    int age=0;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age<19){
        printf("YOu cannot play game:\n");
    } else{
        for(int x=0; x<age; x++){
            printf("#");
        }
    }


    return 0;
}

