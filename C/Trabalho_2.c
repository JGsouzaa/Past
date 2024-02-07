#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int p, l, c;
	
	p=0;
	l=0;
	c=0;
	
	printf("Digite a ordem da matriz: \n");
	scanf("%d",&p);
	
	int matriz_a[p][p], matriz_b[p][p], matriz_c[p][p];
	
	//Matriz A
	for(l=0;l<p;l++){
		for(c=0;c<p;c++){
			printf("Digite o valor de [%d][%d] da Matriz A: ", l,c);
			scanf("%d", &matriz_a[l][c]);
		}
	}
	
	printf(" \n \n");
	
	
	//Matriz B
	for(l=0;l<p;l++){
		for(c=0;c<p;c++){
			printf("Digite o valor de [%d][%d] da Matriz B: ", l,c);
			scanf("%d", &matriz_b[l][c]);
		}
	}
	
	int soma, l1, c1,i,j;
	soma=0;
	
	for(l1=0;l1<p;l1++){
		for(c1=0;c1<p;c1++){
			soma=0.0;
			for(i=0;i<p;i++){
				soma=soma+matriz_a[l1][i]*matriz_b[i][c1];
				}
				
			matriz_c[l1][c1]=soma;
		}
	}
	 
	 printf("\n \n");
	 
	 //Matriz C
	
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			if(j!=(p-1)){
				printf("%.2d \t", matriz_c[i][j]);
			}
			else
				printf("%.2d \n", matriz_c[i][j]);
		}
	} 
	 printf("");
	return 0;
}
