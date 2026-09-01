#include <stdio.h>
#include <stdlib.h>

/* Crie um programa que leia um numero, entre 1 e 9 e caso ele seja positivo, 
verifique se ele é um numero primo, caso seja, imprima seu dobro, caso nao seja primo,
verifique se é par ou impar. Se for par mostre o resultado da soma com 2. Se for impar,
mostre seu proximo e seu anterior. Caso seja negativo, mostre seu inverso.
Caso não esteja entre 1 e 9 , mostre _out_of_range. */

int main(int argc, char *argv[]) {
	/*
	int n;
	printf("entre com o numero: ");
	scanf("%d", &n);
		// equivalente (n>= 1 && n<=10
	if(n<10 && n>1)
		//isso é interessante (n==4 || n==6 || n==8 || n==9)
		if(n==1 || n==2 || n==3 || n==5 || n==7)
			printf("o dobro de %d = %d", n, (n*2));
		else if(n%2 == 0)
			printf("%d+2 = %d", n , n+2);
		else
			printf("|%d|%d|%d|", n-1, n, n+1);
		
	else printf("_out_of_range");
	
	*/		
	
	char op;
	scanf("%c", &op);
	switch(op){
		case 'a': printf("opa ta falando com ele"); break;
	
	case 'b': printf("Benedito"); break;
	
	case 'c': printf("É complicada a sitaução"); break;	
	
	case 'd': printf("Tamo junto"); break;
		
	}
	
	return 0;
}
