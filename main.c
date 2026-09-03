#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resposta;
	printf("Usuario, qual exercicio quer resolver? |2|3|8|\n");
	scanf("%d", &resposta);
	
	switch (resposta)
	case 2:
	
	;
	//Faça um programa que leia um valor em reais e catação do dolar. Em seguida, imprima o valor correspondente em dólar
	float dola, real, cotaa;
	scanf("%f", &real);
	scanf("%f", &cota);
	printf("%f reais são %f dolinhos", real, (real/cota));
	
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus fahrenheit.
	float tempC, tempF;
	scanf("%f", &tempC);
	tempF = tempC *(9.0/5.0) + 32.0;
	printf("A temperatura maxima de hoje na tela da globo %f", tempF);
	
	//(URI 1019) Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e
	int segundos;
	scanf("%f", &segundos);
	horas = segundos/3600 ;
	minutos = (segundos-(horas*3600))60;
	segundos = segundos-((horas*3600)+(minutos*60));
	printf("Tempo %d:%d%d", (segundos%36000))
	return 0;
}
