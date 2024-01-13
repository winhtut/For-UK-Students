//
// Created by National Cyber City on 1/13/2024.
//

#include "stdio.h"

int main(){
    int i=0;
    int z=0;
    int y=0;
    for(i=0; i<10 ; i++){//i=2 // outer loop

        for(y=0; y<i; y++){ // inner loop
            printf("*");
        }
        for(z=0; z<i*2; z++){ // inner loop
            printf("#");
        }
        printf("\n");

    }

    return 0;
}

