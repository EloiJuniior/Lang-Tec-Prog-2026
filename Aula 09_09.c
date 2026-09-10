#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int mult (int digto, int valor){
	return digto*valor;
}

int main(int argc, char *argv[]) {
	
	int dg1, dg2, dg3 , dg4, dg5, dg6, dg7, dg8, dg9, dv, dv2, soma, resto;
		
		scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &dg1, &dg2, &dg3 , &dg4, &dg5, &dg6, &dg7, &dg8, &dg9, &dv, &dv2);
	
	printf("confirme o cpf: %d%d%d.%d%d%d.%d%d%d-%d%d",
	dg1, dg2, dg3 , dg4, dg5, dg6, dg7, dg8, dg9, dv, dv2);
	
	soma = mult(dg1,10)mult(dg2,9)+(dg3,8)+(dg4,7)+(dg5,6)+(dg6,5)+(dg7,4)+(dg8,3)+mult(dg9,2);
	
	soma *=10;
	resto = soma%11;
	
	
	
	
    return 0;
}

