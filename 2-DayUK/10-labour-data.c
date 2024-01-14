//
// Created by National Cyber City on 1/14/2024.
//

#include "stdio.h"

struct data{
    int age;
    char fav_char;
    int id;
    int salary;
};

struct data labour[1000];

int main(){

    for(int i=0; i<5; i++){

        labour[i].age=10+i;
        labour[i].fav_char=90+i;
        labour[i].id=101+i*2;
        labour[i].salary=1000+i*3;
    }
    for(int i=0; i<5; i++){

        printf("age %d\n",labour[i].age);
        printf("char %c\n",labour[i].fav_char);
        printf("id %d\n",labour[i].id);
        printf("salary %d\n",labour[i].salary);
    }

    return 0;
}