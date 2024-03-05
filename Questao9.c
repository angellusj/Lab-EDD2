#include <stdio.h>
#include <stdlib.h>
int produtoRecursivo(int x1, int x2);
int main()
{
    int x1, x2;
    printf("\nInsira valores para x1 e x2:");
    scanf("%i %i", &x1, &x2);

    int n = produtoRecursivo(x1,x2);

    printf("\n%i ", n);
}

int produtoRecursivo(int x1, int x2)
{
    if (x2 == 1)
    {
        return x1;
    } 

    if(x2 == 0){
        return x1;
    }

    return x1 + produtoRecursivo(x1, x2 - 1);
}