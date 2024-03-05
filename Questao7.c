#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void isPrime(int n);

int main()
{   
    setlocale(LC_ALL, "portuguese");
    int n;

    printf("\n Insira um número para verificar se ele é primo: ");
    scanf("%i", &n);

    isPrime(n);
}

void isPrime(int n)
{

    int verificador = 0, i;

    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            verificador = 1;
        }
    }
     if (verificador == 0)
        {
            printf("\n %i é um número primo", n);
        }
        else
        {
            printf("\n %i não é um número primo", n);
        }
}