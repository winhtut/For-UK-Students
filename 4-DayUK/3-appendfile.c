//
// Created by National Cyber City on 1/21/2024.
//

#include "stdio.h"

int main(){
    FILE *fptr;

    fptr = fopen("filter.txt","a");

    if(fptr==NULL){
        perror("File Opening Error!\n");
        return -1;
    }

    fprintf(fptr,"This is appending data:");
    return 0;
}