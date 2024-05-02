#include<stdio.h>
#include<stdbool.h>
#include <string.h>

void main(){
  printf("crie uma senha: ");
  char senha,senhadig;
  int cont=0;
  scanf("%c",&senha);
  printf("digite a senha: ");
  scanf("%c",&senhadig);
  while(cont<4){
    if(strcmp(senha,senhadig)==0){
      printf("senha correta");
      break;
    }
    else{
      printf("voce errou! digite a senha novamente: ");
    }
    cont++;
  }
}
