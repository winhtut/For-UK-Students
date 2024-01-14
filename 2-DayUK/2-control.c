// Created by National Cyber City on 1/14/2024.
// if else elseif control

#include "stdio.h"

int main(){
    int age=0;
    printf("Enter your age:");
    scanf("%d",&age);

    if(age<19){
        printf("YOu cannot play game:\n");
    } else if(age==18){
        printf("You need a little time:\n");
    } else{
        int space=age;
        for(int x=0; x<age; x++){

            for(int y=0; y<space; y++){
                printf(" ");
            }
            for (int xx = 0; xx < x*2; xx++) {
                printf("*");
            }
            printf("\n");
            space--;
        }
    }

    return 0;
}

