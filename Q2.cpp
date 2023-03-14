#include <stdio.h>

int main() {

    int A[2][2];
    int B[2][2];
    int C[2][2] = {{0, 0}, {0, 0}};

   
    printf("Entre com os valores da matriz A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Valores de A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Entre com os valores da matriz B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Valores de B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Matriz resultante:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

