#include<stdio.h>


int primo(int n){
    int i=1, cont=0;
    for (i;i<=n;i++){
        if (n%i==0){
        cont++;

        }
    }
    if (cont==2){
        return 1;

    }
    else if (cont!=2){
        return 0;

    }
}

int main(){

    int n1,n2,x;
    printf("dígite o número de inicio: ");
    scanf("%d",&n1);
    printf("dígite o número de fim: ");
    scanf("%d",&n2);
    printf("Entre %d e %d são primos:",n1,n2);
    for (n1+1;n1<n2;n1++){
        x= primo(n1);
        if (x==1){
            printf(" %d, ",n1);
        }
    }


 return 0;   
}
