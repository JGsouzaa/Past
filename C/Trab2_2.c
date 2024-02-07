#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	setlocale (LC_ALL, "Portuguese");
	
	int n, lin, col, i, A[lin][col], B[lin][col], v[i], C[lin][col];
	
	printf("Digite a ordem das matrizes A e B: ");
	scanf("%d", &n);
	
	printf("Informe os elementos da matriz A: ");
	
	for(lin = 0; lin < n; lin ++){
		for(col = 0; col < n; col ++){
			printf("A[%d][%d]: ", lin, col);
			scanf("%d", &A[lin][col]);
		}
	}
	
	printf("\n");
	
	for(lin = 0; lin < n; lin ++){
		for(col = 0; col < n; col++){
			printf("B[%d][%d]: ", lin, col);
			scanf("%d", &B[lin][col]);
		}
	}
	
	for(lin = 0; lin < n; lin++){
		for(col = 0; col <n; col ++){
			printf("A[%d][%d] = %d", lin, col, A[lin][col]);
		}
	}

	return 0;
}
