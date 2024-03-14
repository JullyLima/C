#include<stdio.h>
//converter celcius para fahrenheit
c2f(float tc){
  
  float tf;
  tf = (tc * 1.8) + 32;
  return tf;
}
//converter fahrenheit para celcius
f2c (float tf){
  float tc;
  tc= ((tf-32)/1.8);
  return tc;
  
}

int main(){
  float temp,op,tempfim;
  
  printf("1-Celcius para Fahrenheit\n");
  printf("2-Fahrenheit para Celcius\n");
  printf("Qual o tipo de temperatura que você quer converter?\n");
  scanf("%f",&op);
  if (op==1){
    printf("digite a temperatura: ");
    scanf("%f",&temp);
    printf("a temperatura em fahrenheit é: %f",c2f(temp));
  }
  else if (op==2){
    printf("digite a temperatura: ");
    scanf("%f",&temp);
    printf("A temperatura em celcius é: %f",f2c(temp));
  }
  return 0;
}

