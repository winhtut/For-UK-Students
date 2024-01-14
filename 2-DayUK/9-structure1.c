//
// Created by National Cyber City on 1/14/2024.
//

#include "stdio.h"

struct my_struct{
    int age;
    char fav_char;
};

int main(){
    struct my_struct data;
    data.age=10;
    data.fav_char='a';

    printf("Data age: %d\n",data.age);
    printf("Data char: %d\n",data.fav_char);

    return 0;
}