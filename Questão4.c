#include <stdio.h>

void DecimalARoman(int n){
  if (n <= 0 || n > 100){
    printf("Dê um valor no intervalo de 1 a 100.\n");
    return;
  }

  printf("%3d: ", n);
  while (n >= 100){
    printf("C");
    n -= 100;
  }
  while (n >= 90){
    printf("XC");
    n -= 90;
  }
  while (n >= 50){
    printf("L");
    n -= 50;
  }
  while (n >= 40){
    printf("XL");
    n -= 40;
  }
  while (n >= 10){
    printf("X");
    n -= 10;
  }
  while (n >= 9){
    printf("IX");
    n -= 9;
  }
  while (n >= 5){
    printf("V");
    n -= 5;
  }
  while (n >= 4){
    printf("IV");
    n -= 4;
  }
  while (n >= 1){
    printf("I");
    n -= 1;
  }

  printf("\n");
}

int main(){
  printf("Tabela dos equivalentes algarismos romanos para decimais de 1 a 100:\n");
  for (int i = 1; i <= 100; i++){
    DecimalARoman(i);
  }
  return 0;
}