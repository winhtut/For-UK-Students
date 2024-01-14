//
// Created by National Cyber City on 1/14/2024.
//

#include "stdio.h"

int main(){
    int option=0;
    int loop=10;
    while (loop>=0){
        printf("Enter some data:");
        scanf("%d",&option);

        switch (option) {
            case 1:
                printf("OPtion is one:\n");
                break;
            case 2:
                printf("Option is two:\n");
                break;
            case 3:
                printf("Option is three:\n");
                break;
            default:
                printf("This is defualt option\n");
                break;
        }
        loop--;
    }

    return 0;
}