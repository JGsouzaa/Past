#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	setlocale (LC_ALL, "Portuguese");
	
	int m[3][3];
	int i, j;
	int L, C;
	
	L = 0;
	C = 0;
	
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("m[%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			if (m[i][j] > m[L][C]){
			L = i;
			C = j;
			}
		}
	}

	printf("\n");
	for(i = 0; i < 3; i++){
		printf("|");
		for(j = 0; j < 3; j++){
			printf("%d", m[i][j]);
		}
		printf("|");
		printf("\n");
	}
	
	printf("\n");
	printf("O maior é: %d (linha [%d] coluna [%d]) \n", m[L][C], L, C);
	
	return 0;
}
