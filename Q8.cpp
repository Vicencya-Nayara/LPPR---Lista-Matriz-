#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int A[2][2];

    printf ("Preencha a matriz\n");
    for (int l = 0; l < 2; ++l) {
        for (int c = 0; c < 2; ++c) {
            printf("Digite o valor [%d][%d]: ", l, c);
            scanf("%d", &A[l][c]);
        }
    }
    
    printf ("\nMatriz original: \n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d   ", A[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (i == j) {
                A[i][j] = 1; 
            } else {
                A[i][j] = 0; 
            }
        }
    }

    printf("\nMatriz indentidade: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
