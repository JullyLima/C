#include<stdio.h>
#include<stdbool.h>

bool divisivel(int arr[], int tam, int x){
  int acont = 0, div=0;
  int ind=tam;
  ind=ind-1;
  if (arr[ind]/x==0){
        div++;
    }
  if (div==acont){
        return true;
    }
  acont++;
  if (acont!=tam){
      divisivel(arr,tam,x);
  }
  if (acont==tam){
    return false;
  }

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
    if (divisivel(arr,tam,x)==true){
    printf("Todos os números são divisiveis por %d",x);
    }
}