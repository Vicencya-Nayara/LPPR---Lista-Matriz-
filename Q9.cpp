#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i = 2, j = 2;
    int B[i][j];
    int A[i][j];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Linha %d, Coluna %d = ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < i; i++) {
        for (int j = 0; j < j; j++) {
            B[i][j] = A[j][i];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", A[i][1 - j]);
        }
        printf("\n");
    }

    return 0;
}

