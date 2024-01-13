#include "stdio.h"
int main(){
    int i=0;
    int ii=0;
    int zz=0;
    int yy=1;
    for(i=10; i>=0 ; i--){

        for(ii=0; ii<i; ii++){
            printf("#");
        }
        for(zz=0; zz<yy*2; zz++){
            printf("*");
        }
        yy++;

        printf("\n");
    }
    return 0;
}

