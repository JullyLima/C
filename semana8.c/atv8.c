#include<stdio.h>
#include<stdbool.h>


int divisivel(int arr[], int tam, int x, int index, int div, int soma) {
    if (index == tam) {
        return soma; // Retorna a soma dos números divisíveis por x
    }

    if (arr[index] % x == 0) {
        soma += arr[index];
        div++; // Incrementa a contagem de números divisíveis
    }

    // Chama recursivamente a função para o próximo elemento
    return divisivel(arr, tam, x, index + 1, div, soma);
}



void main(){

int x, tam;
printf("Digite o X: ");
scanf("%d",&x);
printf("Digite o tamanho da lista: ");
scanf("%d",&tam);
int arr[tam];
for (int i=0;i<tam;i++){
    printf("Digite o numero da posicao %d: ",i);
    scanf("%d",&arr[i]);
    }

int numDivisiveis = divisivel(arr, tam, x,0,0,0);
    printf("A soma dos números divididos por %d é: %d", x, numDivisiveis);

    return 0;
}