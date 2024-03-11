/*
Desenvolva um programa semelhante ao anterior, só que com a seguinte
diferença:

Caso o usuário não consiga acertar o número sorteado após a 5ª tentativa,
o programa deverá mostrar a mensagem “você excedeu o número máximo
de tentativas” e mostrar qual era o número sorteado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

  int dado, palpite,bol, cont;
  bol=1;
  cont=1;
  srand(time(NULL));     // inicializar gerador randômico
  dado = 1 + rand() % 100; // gera valor de 1 a 100
  printf("Lancei o dado! tente adivinhar o seu valor...");

  while(bol==1 && cont<=5){
    scanf("%d", &palpite);
    if ((1>palpite)||(palpite>100)) {
        printf("número inválido! digite um número entre 1 e 100\n");
  } 
    else if (palpite < dado) {
        printf("seu palpite foi muito baixo! tente novamente...\n"); 
        cont++;
  }

    else if (palpite > dado){
        printf("seu palpite foi muito alto! tente novamente...\n");
        cont++;
  }
    else if(palpite==dado){
        printf( "parabéns! você acertou o valor!\n");
        bol=6;
    }
  }

  if(cont>=5){
        printf("Você excedeu o número máximo de tentativas!\n o número sorteado era:%d",dado);
    }

  return 0;
}
