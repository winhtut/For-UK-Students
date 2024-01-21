//
// Created by National Cyber City on 1/20/2024.
//

#include "stdlib.h"
#include "stdio.h"

typedef struct db{
    char data[100];
}WinHtut;

int main(){
    WinHtut db[100];
    FILE *fptr;
    int index=0;
    fptr = fopen("filter.txt","r");

    if(fptr == NULL){
        printf("File Opening Error \n");
    } else{
        printf("File Opening Success!\n");

        while (fgets(db[index].data,100,fptr)!=NULL){
            printf("Data %s\n",db[index].data);
            index++;
        }
    }
    for (int i = 0; i < index; ++i) {
        printf("Your data are: %s\n",db[i].data);
    }

    fclose(fptr);

    return 0;
}