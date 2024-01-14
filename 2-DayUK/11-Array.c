//
// Created by National Cyber City on 1/14/2024.
// Array Lesson
#include "stdio.h"
int main(){
    int a=10;
    char my_char='a';
    int sec_arr[10];
    int my_arr[10]={1,2,3,4,5,6,7,8,9,10};

    char my_arr_char[10]={'a','b','c'};

    for (int i = 0; i < 10; ++i) {
        printf("Data at %d is %d\n",i,my_arr[i]);
    }

    for(int x=0; x<5; x++){

        printf("Enter data for %d\n",x);
        scanf("%d",&sec_arr[x]);
    }

    for(int x=0; x<5; x++){
        if(sec_arr[x]==150){
            printf("We found :%d\n",150);
        } else{
            printf("Your data : %d\n",sec_arr[x]);
        }

    }

}

