#include <stdio.h>
#include <locale.h>

#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matriz_orig[LIN][COL];
	int matriz_reflex[LIN][COL];
	
	printf("\t\t\t\tMATRIZ REFLEXÃO\n\n");
	
	for(int i = 0; i < LIN; i++){
	    for(int j = 0; j < COL; j++){
		printf("Digite o valor da posição [%d][%d]: ", i , j);
		scanf("%d", &matriz_orig[i][j]);
	    }  
    }
    
    printf("\nMATRIZ ORIGINAL:\n");
    for(int i = 0; i < LIN; i++){
    	for(int j = 0; j < COL; j++){
    		printf("%d\t", matriz_orig[i][j]);
		}
		printf("\n");
	}
	
    for(int i = 0; i < LIN; i++){
    	for(int j = 0; j < COL; j++){ 
    	    if(j == 0){
    	    	matriz_reflex[i][j] = -matriz_orig[i][j];
			}else{
				matriz_reflex[i][j] = matriz_orig[i][j];
			}
	   }
   }
   
   printf("\nMATRIZ REFLEXÃO AO EIXO Y:\n");
   	for(int i = 0; i < LIN; i++){
	    for(int j = 0; j < COL; j++){
			printf("%d\t", matriz_reflex[i][j]);
	    }  
	    printf("\n");
    }
    
    return 0;
}

