#include<stdio.h>
#include<stdlib.h>

int main(void){
    for(int i = 0; i <= 127;i ++){
        printf("%d: %c ",i,(char)i);

        if((i + 1)  % 10 == 0){
            printf("\n");
        }
    }
    return 0;
}