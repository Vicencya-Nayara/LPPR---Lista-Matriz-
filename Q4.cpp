#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int m[LIN][COL]; // matriz
	int d, dp = 1, ds = 1; // determinante
	
	for(int i = 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i , j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	for(int i= 0; i < LIN; i++){
		for(int j = 0; j < COL; j++){
			if(i==j){
				dp*= m[i][j];
			}
			if(j==(COL - 1) - i){
				ds*= m[i][j];
			}
		}
	}
	
	d = dp - ds;
	
	printf("O determinante é: %d", d);
	return 0;
}
