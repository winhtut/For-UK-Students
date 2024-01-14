//
// Created by National Cyber City on 1/14/2024.
//

#include "stdio.h"
int adding(int a,int b);
int main(){




    return 0;
}

int option(){
    int my_opt=0;
    int first_num=0;
    int sec_num=0;
    printf("Calculator Program:\n");
    printf("First Number:");
    scanf("%d",&first_num);

    printf("Second Number:");
    scanf("%d",&sec_num);

    printf("Press 1: to add:\nPress 2: to sub:\nPress 3: to multi:\nPress 4:Div:");
    scanf("%d",&my_opt);
    switch (my_opt) {
        case 1:
            printf("This is adding:\n");
            int result =adding(first_num,sec_num);
            printf("This is your result: %d",result);

            break;
        case 2:
            printf("This is sub:\n");
            break;
        case 3:
            printf("This is multi:\n");
            break;
        case 4:
            printf("This is Div:\n");
            break;
        default:
            printf("This is default option:\n");
            break;
    }

}

int adding(int a,int b){

    return a+b;
}


