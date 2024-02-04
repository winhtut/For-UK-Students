//
// Created by winht on 1/27/2024.
//

#include "stdio.h"
#include "string.h"

int main(){

    char myString[]="This is frist string";
    char myString2[]="This is concat";
    char toAccept[30];

    strcpy(toAccept,myString);
    strcat(toAccept,myString2);

    int length = strlen(toAccept);
    printf("Process %s: Length=%d",toAccept,length);

    return 0;
}