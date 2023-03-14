#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int N; 
    printf("Digite a ordem da matriz: ");
    scanf("%d", &N);
    
    int **m;
    m = (int **) malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++) {
        m[i] = (int *) malloc(N * sizeof(int));
    }
    
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    

    for (int k = 0; k < N-1; k++) {
        for (int i = k+1; i < N; i++) {
            double fator = m[i][k] / (double) m[k][k];
            for (int j = k+1; j < N; j++) {
                m[i][j] = m[i][j] - fator * m[k][j];
            }
            m[i][k] = 0;
        }
    }
    
    int det = 1;
    for (int i = 0; i < N; i++) {
        det *= m[i][i];
    }
    
    printf("O determinante é: %d", det);
    
    for (int i = 0; i < N; i++) {
        free(m[i]);
    }
    free(m);
    
    return 0;
}

