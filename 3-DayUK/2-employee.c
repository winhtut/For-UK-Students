//
// Created by National Cyber City on 1/20/2024.
//structure

#include "stdio.h"

struct data{
    // allowed only initialization
    int e_id;
    int age;
    char name[30];
    int ph;
    char address;

};
struct data employee[1000];
int main(){
    employee[0].e_id = 101;
    employee[0].age = 30;

    printf("data %d\n",employee[0].e_id);
    printf("data %d\n",employee[1].e_id);
    printf("data %d\n",employee[2].e_id);

    return 0;
}

