//
// Created by National Cyber City on 1/20/2024.
//structure

#include "stdio.h"

struct data{
    // allowed only initialization
    int age;
    char name[30];
    int ph;
    char address;

};

int main(){
    struct data db1;
    db1.age = 20;
    db1.name[0] = "Winhtut";

    printf("data %d",db1.age);

    return 0;
}

