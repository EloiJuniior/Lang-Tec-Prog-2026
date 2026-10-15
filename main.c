#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 numeros, inteiros positivos, ignorando os negativos
e cacule a soma e a média, e mostre na tela.
OBS: Somente com 3 variaveis (i, n, s). Não pode ser vetor.
Não pode usar laço FOR */

int main(int argc, char *argv[]) {
	int i, n, 
	s=0;0
	
	while( i<10){
		scanf("%d", &n);
		if(n>0){
		
			s += n;
			i ++;
		
		}
	}
	
	printf("valor e |%d|%d|",s,s/10);
	
	return 0;
}
