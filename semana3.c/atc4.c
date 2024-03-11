/*
Desenvolva um programa que leia um número inteiro e imprima todos os seus
divisores.

Exemplo de execução do programa:

Escreva um número inteiro: 10
Os divisores de 10 são: 1 2 5 10
*/

#include <stdio.h>

int main(){
  int num, div,i,cont=0;
  printf("Escreva um número inteiro: ");
  scanf("%d", &num);
  int divisores[num];
  printf("Os divisores são: ");
  for (i=1; i <= num; i++){
    div=(num%i);
    if (div == 0){
      divisores[cont]=i;
      printf("%d \t",divisores[cont]);
      cont++;
    }
  }
  return 0;
}