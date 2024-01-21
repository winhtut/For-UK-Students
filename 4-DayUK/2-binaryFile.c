//
// Created by National Cyber City on 1/21/2024.
//

#include "stdio.h"
typedef struct{
    int id;
    float score;
}WinHtut;


int main(){
    FILE *fptr;
    WinHtut outRecord={1,10.10};
    WinHtut inRecord;

    fptr = fopen("record.bin","wb");

    if(fptr==NULL){
        perror("File Opneing Error:\n");
        return -1;
    }
    fwrite(&outRecord,sizeof(WinHtut),1,fptr );
    fclose(fptr);

    fptr = fopen("record.bin","rb");

    if(fptr == NULL){
        perror("File Opneing Error:\n");
        return -1;
    }
    fread(&inRecord,sizeof(WinHtut),1,fptr);
    printf("Our Record ID:%d , Score:%.2f\n",inRecord.id,inRecord.score);
    fclose(fptr);


    return 0;
}