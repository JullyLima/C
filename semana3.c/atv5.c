/*
Dizemos que um número inteiro é perfeito quando este número é igual ao
dobro da soma de seus divisores. O número 6, por exemplo, é perfeito, pois a
soma de seus divisores é 12 (resultado de 1+2+3+6), que é o dobro de 6. Já o
número 10 não é perfeito, pois a soma de seus divisores é 18 (resultado de
1+2+5+10), que não é o dobro de 10.

Desenvolva um programa que leia um número inteiro e diga se ele é ou não um
número perfeito.

Exemplo de execução do programa:

Escreva um número inteiro: 6
6 é um número inteiro perfeito

Outro exemplo de execução do programa:

Escreva um número inteiro: 10
10 NÃO é um número inteiro perfeito
*/

#include <stdio.h>

int main(){
  int num, div,i,cont=0,soma;
  printf("Escreva um número inteiro: ");
  scanf("%d", &num);
  int divisores[num];
  printf("os divisores são: ");
  for (i=1; i <= num; i++){
    div=(num%i);
    if (div == 0){
      divisores[cont]=i;
      printf("%d \t",divisores[cont]);
      cont++;
      soma=soma+i;
    }
  }
  printf("\nsoma é: %d \n", soma);
  if (soma==num*2){
      printf("%d e um numero perfeito!",num);
  }
  else{
     printf("%d nao e um numero perfeito!",num);
  }

  return 0;
}