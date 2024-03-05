#include <stdio.h>
#include <math.h>

void calcula_raiz(int a, int b, int c)
{
    int delta = (-b * b + 4 * a * c);

    if (delta < 0)
    {
        printf("Nao possui raiz real!\n");
        return ;
    }

    float x1 = ((-b + sqrt(delta)) / 2 * a);
    float x2 = ((-b - sqrt(delta)) / 2 * a);

    printf("As raizes reais sao: %2.f %2.f", x1, x2);
}

int main(void)
{
    int coef_a, coef_b, coef_c;

    printf("Informe o valor de a: \n");
    scanf("%d", &coef_a);
    printf("Informe o valor de b: \n");
    scanf("%d", &coef_b);
    printf("Informe o valor de c: \n");
    scanf("%d", &coef_c);

    calcula_raiz(coef_a, coef_b, coef_c);

    return 0;
}