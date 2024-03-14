#include<stdio.h>


float somadora(int n){
    int k=1;
    float termo=0,soma=0;
    for(k;k<=n;k++){
        if(k%2==0) {
            termo= -((float)k / ((float)k * (float)k));
        }
       else{
           termo=((float)k / ((float)k * (float)k));
       }

       soma+=termo;
    }

    return soma;
}

int main (){

    int n;
    printf("dígite um número: ");
    scanf("%i",&n);
    printf("O resultado é: %f",somadora(n));

}