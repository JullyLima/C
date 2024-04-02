#include <stdio.h>

void incluir(int n, int m, int matriz[n][m]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Digite um valor para a linha %d e coluna %d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int n, m, i, j;
    printf("Quantas Linhas: ");
    scanf("%d", &n);
    printf("Quantas Colunas: ");
    scanf("%d", &m);
    int a[n][m], b[n][m], c[n][m];

    printf("Incluir matriz A:\n");
    incluir(n, m, a);
    printf("Incluir matriz B:\n");
    incluir(n, m, b);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matriz C (A + B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}