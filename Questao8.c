#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;

    printf("\nInsira um número para inverter o sua sequência: ");
    scanf("%i", &n);

    int inverso = 0;
    int ultimoNumero;
    while (n > 0)
    {
        ultimoNumero = n % 10;
        inverso = inverso * 10 + ultimoNumero;
        n /= 10;
    }

    printf("\n%i", inverso);
}
