#include <stdio.h>

int main(){
	int matriz[3][3];
	
	printf("Matriz Original: \n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Digite o valor da %d linha, coluna %d: ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		} 
	}
	printf("\n");
	
	printf("Matriz transporta: \n");
		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 3; j++){
				printf("%d\t", matriz[j][i]);
		}
		printf("\n");
	}
	return 0;
}
