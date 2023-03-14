#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int matriz_original[LIN][COL];
    int matriz_cofatora[LIN][COL];
    int aux;

    printf("\t\t\t\t\tMATRIZ COFATORA\n\n");

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz_original[i][j]);
        }
    }

    printf("\nMatriz Original:\n"); 
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++){
            printf("%d\t", matriz_original[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++) {
            matriz_cofatora[i][j] = matriz_original[i][j];    
        }
    }

    for(int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            if(j == (COL - 1) - i){
                matriz_cofatora[i][j] = -matriz_cofatora[i][j];
            }
        }
    }

    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL/2; j++) {
            int temp = matriz_cofatora[i][j];
            matriz_cofatora[i][j] = matriz_cofatora[i][COL-1-j];
            matriz_cofatora[i][COL-1-j] = temp;
        }
    }


    aux = matriz_cofatora[0][0];
    matriz_cofatora[0][0] = matriz_cofatora[1][1];
    matriz_cofatora[1][1] = aux;

    aux = matriz_cofatora[0][1];
    matriz_cofatora[0][1] = matriz_cofatora[1][0];
    matriz_cofatora[1][0] = aux;

    printf("\nMatriz Cofatora:\n");
    for(int i = 0; i < LIN; i++) {
        for(int j = 0; j < COL; j++){
            printf("%d\t", matriz_cofatora[i][j]);
        }
        printf("\n");
    }

    return 0;
}

