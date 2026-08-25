#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("d% , &numero");
	
	if (numero > 0){
		printf("O inverso do numero e: %.2f\n", 1.0 / numero);
	} else {
		printf("O Quadrado de numero e: %d\n", numero* numero);
	}
	
/*	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		resultado = a;
	}else{
		resultado = b;
	}
	
	if (c>resultado){
		resultado = c;
	}
	
	printf("%d e o maior", resultado);
	
	*/
	
	
	return 0;
}
