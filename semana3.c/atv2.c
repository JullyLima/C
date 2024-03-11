/*
Desenvolva um programa semelhante ao anterior, só que com as seguintes
diferenças:

Se o palpite do usuário estiver incorreto, o programa deverá imprimir a dica
(“você chutou muito baixo” ou “você chutou muito alto”) sem mostrar o
valor sorteado, incrementar o número de tentativas e dar uma nova chance
até que ele consiga acertar o número sorteado.

Quando o usuário conseguir acertar o número sorteado, o programa deverá
apresentar a mensagem de parabéns e mostrar o número de tentativas
feitas pelo usuário até acertar o número.
*/
  

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{

  int dado, palpite,bol;
  bol=1;
  srand(time(NULL));     // inicializar gerador randômico
  dado = 1 + rand() % 100; // gera valor de 1 a 100
  printf("Lancei o dado! tente adivinhar o seu valor...");

  while(bol==1){
    scanf("%d", &palpite);
    if ((1>palpite)||(palpite>100)) {
        printf("número inválido! digite um número entre 1 e 100\n");
  } 
    else if (palpite < dado) {
        printf("seu palpite foi muito baixo! tente novamente...\n"); 
  }
    else if (palpite > dado){
        printf("seu palpite foi muito alto! tente novamente...\n");
  }
    else if(palpite==dado){
        printf( "parabéns! você acertou o valor!\n");
        bol=0;
  }
  }
  return 0;
}
