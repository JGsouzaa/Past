#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int matriz[2][4];
	int i, j;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++){
			printf("Digite o valor para [%d][%d] :", i, j);
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < 2; i++){
		printf("|");
		for(j = 0; j < 4; j++){
			printf(" %d ", matriz[i][j]);
			}
		printf("|");		
		printf("\n");
	}		
	
	
	
	return 0;
}
