#include<stdio.h>
#include <stdlib.h>
void iguais(int lenA, int lenB, int a[lenA], int b[lenB]){
    int lenf= lenA+lenB;
    int count=0,count2=0;
    int inter[lenf];
    int menos[lenf];
    for (int i=0;i<lenA;i++){
        int encontrou=0;
        for(int j=0;j<lenB;j++){
            if  (a[i]==b[j]){
              inter[count++] = a[i];
              encontrou=1;
              break;
            }
        }
        if(encontrou==0){
        menos[count2++]=a[i];

        }
    }


printf("\nAs intersecções são: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", inter[i]);
    }
printf("\n Os números que tem em A-B= ");
    for (int i = 0; i < count2; i++) {
        printf("%d ", menos[i]);  
    }
}



int main (){

    int lenx,leny;

    printf("dígite o tamanho da lista 1: ");
    scanf("%d",&lenx);
    int x[lenx];

   for (int i =0; i <lenx; i++) {
       printf("digite o valor para a posição %d: ",i);
       scanf("%d",&x[i]);
   }
      printf("\nLista1: ");
    for (int i = 0; i < lenx; i++) {
        printf("%d ", x[i]);
    }

    printf("\ndígite o tamanho da lista 2: ");
    scanf("%d",&leny);
    int y[leny];

   for (int i =0; i <leny; i++) {
       printf("digite o valor para a posição %d: ",i);
       scanf("%d",&y[i]);
   }
    printf("\nLista2: ");
    for (int i = 0; i < leny; i++) {
        printf("%d ", y[i]);
    }

    iguais(lenx, leny,x,y);

  return 0;  
}