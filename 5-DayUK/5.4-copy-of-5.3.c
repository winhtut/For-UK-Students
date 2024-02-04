//
// Created by winht on 1/27/2024.
//
#include "stdio.h"
#include "string.h"

struct TA{

    char my_arr[30];
    char my_arr2[30];
};

struct data{
    char str_arr[30];
};

int main(){
    struct TA ourdata;
    struct data desti;

    int a=97;
    for(int i=0; i<26; i++){
        ourdata.my_arr[i]=a;
        printf("%c",ourdata.my_arr[i]);
        a++;
    }
    printf("\ndata:%s\n",ourdata.my_arr);
    int length=0;

    for(int a=0; a<30; a++){

        if(ourdata.my_arr[a]!='\0'){
            length++;
        } else{
            break;
        }
    }


    printf("\nour data length %d",length);

    for (int z = 0; z < length; ++z) {

        desti.str_arr[z]=ourdata.my_arr[z];
    }

    printf("\nData from destination %s",desti.str_arr);

    return 0;
}