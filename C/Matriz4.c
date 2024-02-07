#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	setlocale (LC_ALL, "Portuguese");
	
	int i, j;
	int m[3][3];
	int E = 0, A;
	int L = 0, C = 0;
	
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	
	
	printf("Digite o elemento para buscar: ");
	scanf("%d", &E);
	
	for(i = 0; (i < 3) && (A = 0); i++){
		for(j = 0; (j < 3) && (A = 0); j++){
			if(m[i][j] == E){
				A = 1;
				L = i;
				C = j;
			}
			else{
				printf("Valor não encontrado!");
			}
		}
	}
	
	printf("\n");
		for(i = 0; i < 3; i++){
			for(j = 0; j < 3; j++){
				printf("%d: ", m[i][j]);
				
		}
	}
	
	return 0;
}
