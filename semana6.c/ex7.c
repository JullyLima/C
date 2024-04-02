#include <stdio.h>

void multiplicarMatrizes(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    int i, j, k;

    // Inicializa a matriz C com zeros
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Realiza a multiplicação das matrizes A e B
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n, m, p, i, j;

    printf("Quantas Linhas para A: ");
    scanf("%d", &n);
    printf("Quantas Colunas para A (e linhas para B): ");
    scanf("%d", &m);
    printf("Quantas Colunas para B: ");
    scanf("%d", &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Incluir matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Digite um valor para a linha %d e coluna %d de A: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Incluir matriz B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("Digite um valor para a linha %d e coluna %d de B: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    multiplicarMatrizes(n, m, p, A, B, C);

    printf("Resultado da multiplicação de A por B (matriz C):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}