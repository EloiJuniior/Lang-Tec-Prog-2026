#include <stdio.h>
#include <stdlib.h>

/* Fa?a um programa que LEIA 10 valores do teclado,
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
*/
int comp_maior (int a, int b){
	if (a>b) return a;
	else return b;
	
}


int main(){
	int valores[10];
	valores [0] = 6;
	int i, maior,menor;
	
	printf("Leia os numeros\n");
	
	//for (inicialização; verificação;)
	
	for(i=0; i<10; i++){
		scanf("%d", &valores[i]);
	}
	for(i=1, maior=valores[0]; i<5; i=i+2){
		int comp_temp = comp_maior(valores[i],valores[i+1]);
		maior = comp_maior(maior, comp_temp);
	}
	printf("\n %d", maior);
	return 0;
}
