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