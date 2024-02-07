#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

// Nomes:
// João Gabriel de Souza

// Curso:
// Eng civil

// Turma:
// B

// Turno:
// Diurno

	setlocale (LC_ALL, "Portuguese");
	
	int i, j, k = 0;
	int r[5], s[5], y[25];
	
	
	for (i = 0; i < 5; i++){
		printf("Digite o valor para r[%d]: ", i);
		scanf("%d", &r[i]);
		}
		
	printf("\n");
	printf("Preenchido o vetor r! \n\n");

	for (j = 0; j < 5; j++){
		printf("Digite o valor para s[%d]: ", j);
		scanf("%d", &s[j]);
	}

	printf("\n");
	printf("Preenchido o vetor s! \n\n");
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (r[i] == s[j]) {
				y[k] = r[i];
				printf("Encontrados valores iguais em r[%d] e s[%d]: %d \n\n", i, j, y[k]);
				sleep(1);
			}
			else{
				printf("Valores diferentes em r[%d] e s[%d] \n\n", i, j);
				sleep(1);
			}
		k++;	
		}
		printf("\n");
	}
	system("Pause");
 	
 	printf("\n\n");
	printf("Preenchido o vetor y! \n\n");
	
	k = 0;
		
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
				if (r[i] == s[j]) {
					printf("Valor de y, posição %d: = %d", k, y[k]);
					printf("\n\n");
				}
				else{
					printf("Valor de y, posição %d: Não recebe valor \n\n", k);
				}
				sleep(1);
		k++;
		}
	}
		printf("\n");
		
	system("Pause");
		
	return 0;
}
