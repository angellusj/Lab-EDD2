#include<stdio.h>
#include<math.h>

void raizes_reais(int a, int b, int c){
    int delta = (-b*b + 4 * a *c);

    if (delta > 0){
        printf("Existem duas raizes reais!\n");
    }
    else if(delta == 0){
        printf("Possui uma raiz real!\n");
    }
    else{
        printf("Nao possui raiz real!\n");
    }
}

int main(void){
    int coef_a,coef_b,coef_c;

    printf("Informe o valor de a: \n");
    scanf("%d",&coef_a);
    printf("Informe o valor de b: \n");
    scanf("%d",&coef_b);
    printf("Informe o valor de c: \n");
    scanf("%d",&coef_c);

    raizes_reais(coef_a,coef_b,coef_c);
    return 0;
}
