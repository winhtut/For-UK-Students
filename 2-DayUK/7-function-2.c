//
// Created by National Cyber City on 1/14/2024.
//

#include "stdio.h"
void printing_fun();
int adding(int a, int b);
int main(){
    int frist=10;
    int second=20;
    printf("This is from main function:\n");
    printing_fun();
    int result = adding(frist,second);
    printf(" Result:%d",result);
    return 0;
}

void printing_fun(){

    printf("This is from printing function:\n");
}

int adding(int a, int b){

    return a+b;
}