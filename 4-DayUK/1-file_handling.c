//
// Created by National Cyber City on 1/21/2024.
//
#include "stdio.h"

int main(){
    FILE *fptr;
    double number=0.0;
    fptr = fopen("numbers.txt","r");

    if(fptr==NULL){
        perror("Error Opening file!\n");
        return -1;
    }
    // EOF = End of file indicatior
    while (fscanf(fptr,"%lf",&number) != EOF ){
        printf("data : %lf\n",number);
    }

    fclose(fptr);

    return 0;
}
