//
// Created by winht on 1/27/2024.
//
#include "stdio.h"

struct mystruct{
    char *myarr;
};
int main(){
    struct mystruct data;

    data.myarr = "HelloPrinting";

    printf(" Data %s",data.myarr);

    return 0;
}