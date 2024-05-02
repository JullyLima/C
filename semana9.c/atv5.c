#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0)
        return reversedNum;
  
    reversedNum = reversedNum * 10 + num % 10;

    return reverseNumber(num / 10, reversedNum);
}

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num, 0);

    printf("O número invertido é: %d\n", reversed);

    return 0;
}