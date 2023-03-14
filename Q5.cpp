#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 3


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m[LIN][COL], adj[LIN][COL]; // matriz e adjunta
	int det, cofator, sinal = 1; // determinante
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i , j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}

	
	for (int i = 0; i < LIN; i++) {
		for (int j = 0; j < COL; j++) {
			cofator = ((m[(i+1)%3][(j+1)%3] * m[(i+2)%3][(j+2)%3]) - (m[(i+1)%3][(j+2)%3] * m[(i+2)%3][(j+1)%3]));
			det += m[i][j] * cofator * sinal;
			sinal *= -1;
		}
	}
	
	for (int i = 0; i < LIN; i++) {
		for (int j = 0; j < COL; j++) {
			cofator = ((m[(i+1)%3][(j+1)%3] * m[(i+2)%3][(j+2)%3]) - (m[(i+1)%3][(j+2)%3] * m[(i+2)%3][(j+1)%3]));
			adj[j][i] = cofator * sinal;
			sinal *= -1;
		}
	}

	printf("Matriz adjunta:\n");
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("%d ", adj[i][j]);
		}
		printf("\n");
	}

	return 0;
}

