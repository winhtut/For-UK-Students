//
// Created by winht on 1/27/2024.
//
#include "stdio.h"
#include "string.h"

typedef struct {

    char my_arr[30];
    char my_arr2[30];
}TA;

struct data{
    char str_arr[30];
};

int main(){
    struct data desti;
    TA ourdata;
    int a=97;
    for(int i=0; i<26; i++){
        ourdata.my_arr[i]=a;
        printf("%c",ourdata.my_arr[i]);
        a++;
    }
    printf("\ndata:%s\n",ourdata.my_arr);

   int length = strlen(ourdata.my_arr);
    printf("\nour data length %d",length);

    for (int z = 0; z < length; ++z) {

        desti.str_arr[z]=ourdata.my_arr[z];
    }

    printf("\nData from destination %s",desti.str_arr);

    return 0;
}