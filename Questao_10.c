#include <stdio.h>
#include <stdlib.h>

int A(int m, int n);
void funcaoAux(int a, int b, int x, int y);
int main()
{
    int a, b, x, y;
    printf("\nInsira os valores para a e b: ");
    scanf("%i %i", &a, &b);
    printf("\nInsira os valores para x e y: ");
    scanf("%i %i", &x, &y);
    funcaoAux(a, b, x, y);
}

void funcaoAux(int a, int b, int x, int y)
{

    for (x = 0; x < a; x++)
    {
        for (y = 0; y < b; y++)
        {
            printf("\n %i", A(x, y));
        }
    }
}

int A(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }

    else if (m > 0 && n == 0)
    {

        return A(m - 1, 1);
    }

    else if (m > 0 && n > 0)
    {
        return A(m - 1, A(m, n - 1));
    }
}