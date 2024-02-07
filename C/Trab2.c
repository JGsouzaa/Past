#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//Nomes: João Gabriel de Souza
	//Curso: Eng civil
	//Turma: B
	//Turno: Diurno

	setlocale (LC_ALL, "Portuguese");

	int lin, col;
	int a, b, i;
	
	a = 0;
	b = 0;
	i = 0;
	
	printf("Digite a ordem das matrizes A e B: ");
	scanf("%d", &a);

	b = a;

	int A[a][b], B[a][b], C[a][b], v[i];
		
	printf("Informe os elementos da matriz A: \n");
	
	for(lin = 0; lin < a; lin++){	
		for(col = 0; col < b; col++){
			printf("A[%d][%d]: ", lin, col);
			scanf("%d", &A[lin][col]);
		}	
	}

	printf(" \n");
	printf("Informe os elementos da matriz B: \n");

	for(lin = 0; lin < a ; lin ++){
		for(col = 0; col < b; col++){
			printf("B[%d][%d]: ", lin, col);
			scanf("%d", &B[lin][col]);
		}
	}

	
	for(lin = 0; lin < a; lin++){	
		for(col = 0; col < b; col++){
	//	printf("A[%d][%d] x B[%d][%d] \n\n", lin, col, col, lin);
		v[i] = (A[lin][col] * B[col][lin]);
	//	printf("v[%d]: %d \n", i, v[i]);
		i++;
	//	printf(" \n");
		}	
	}		
	
	for(lin = 0; lin < a; lin++){
		i = 0;	
		printf("|");
		for(col = 0; col < b; col++){
			C[lin][col] = (v[i] + v[i++] + v[i+2]);
			printf(" %d ", C[lin][col]);
			i + 3;
		}
		printf("| \n");
	}
	return 0;
}
