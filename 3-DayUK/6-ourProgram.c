//
// Created by National Cyber City on 1/20/2024.
// File I/O file input output file handling
#include "stdio.h"
#include "stdlib.h"

int main(){
    FILE *fptr ; // file pointer
    fptr =fopen("filter.txt","w");

    if(fptr == NULL){
        printf("File Opening Error!\n");
    } else{
        printf("File Opening success!\n");
        for(int i=0; i<10; i++) {
            fprintf(fptr, "Hello Embedded System!\n");
        }
    }
    fclose(fptr);
    return 0;
}


