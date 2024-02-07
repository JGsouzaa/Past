#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int i, R[5], S[5], X[10];
	
	setlocale (LC_ALL, "Portuguese");
	
	i=0;
	
	printf("Preenchendo o vetor R:");
	printf("\n\n");
	for(i=0; i<5; i++){
		printf("O valor de R em %d : ", i);
		scanf("%d", &R[i]);
	}
	
	printf("\n");
	printf("Concluido o preenchimento do vetor R!!");
	printf("\n\n");
	system("Pause");
	system("CLS");
	
	printf("Preenchendo o valor de S: ");
	printf("\n\n");
	for(i=0; i<5; i++){
		printf("O valor de S em %d : ", i);
		scanf("%d", &S[i]);
	}
	
	printf("\n");
	printf("Concluido o preenchimento do vetor S!!");
	printf("\n\n");
	system("Pause");
	system("CLS");
	
	printf("Atribuindo valores de R e S em X: \n\n");
	for(i=0; i < 5; i++){
		X[i] = R[i];
		X[i+5] = S[i];
	}

	printf("Concluida a atribuição dos valores de R e S em X!! \n\n");
	system("Pause");
	system("CLS");
	
	printf("Iniciando: \n\nMostrando valores de X: \n\n");
	for(i=0; i<10; i++){
		printf("O valor de X, na posição %d é: %d \n", i, X[i]);
		printf("\n");
	}
	system("Pause");
	return 0;
}
