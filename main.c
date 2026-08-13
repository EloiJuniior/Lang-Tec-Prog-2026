#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// leitura de 02 numero inteiros

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;
	
	printf("digite o primeiro valor");
	scanf("%d", &primeiro);
	printf("digite o segundo valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;

	
	printf ("%d \n %d", segundo, primeiro);
	
	
	printf("Exercicio 02")
	
	double valor;
	
	printf("Digite o valor");
	scanf("%lf", &valor);
	
	printf("Notacao : %e\n", valor);
	
	
	return 0;
}
