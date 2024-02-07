#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
int n = 3; //Variável com o tamanho da matriz
    int i, j;
    int m[n][n]; 

	//Recebe os dados para cada posição da matriz
	for (i=0; i<n; i++) {
      for (j=0; j<n; j++) {
        printf("m[%d][%d] = ", i, j);
        scanf(" %d", &m[i][j]);
      }
      printf("\n");
    }
	printf("\n");

	//Imprime a matriz preenchida
    for (i=0; i<n; i++) {
      for (j=0; j<n; j++) {
        printf("%d ", m[i][j]);
      }
      printf("\n");
	}
	return (0);

}
