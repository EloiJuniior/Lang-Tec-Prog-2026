#include <stdio.h>
#include <stdlib.h>
#define pi 3,14159

int main(int argc, char *argv[]) {
	
	float area,B,b,h;
	
	printf ("Digite o valor de B: \n");
	scanf("%f",&B); 
	
	printf ("Digite o valor de b: \n");
	scanf("%f",&b);
	
	printf ("Digite o valor de h: \n");
	scanf("%f",&h);
	
	area = ((B+b)*h) /2;
	
	printf("Valor total do trapezio: %f",area);
	
	return 0;
}
