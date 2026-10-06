#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que LEIA 10 valores do teclado,
e mostre na tela o maior entre os 5 primeiros
e o menor entre os 5 restantes 
  

int main() {
    int valor, maior, menor, i;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &valor);

        if (i == 1)
            maior = valor;
        else if (i <= 5 && valor > maior)
            maior = valor;

        if (i == 6)
            menor = valor;
        else if (i > 6 && valor < menor)
            menor = valor;
    }

    printf("Maior dos 5 primeiros: %d\n", maior);
    printf("Menor dos 5 ultimos: %d\n", menor);

    return 0;
}

int comp_maior (int a, int b){
	if (a>b) return a;
	else return b;
	
}
*/

int main(){
	float valor[10];
	int i;
	
	printf("Leia os numeros\n");
	
	// PARA ( INICIAL, CONDIÇÃO, INCREMENTO)
	
	for(i=0; i<10; i++){
		scanf("%f",&valor[i]);
	}
	for(i=9; i>0; i--){
		printf("|%f|",valor[1]);
	}
}
