#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int um, dois, tres, quatro, cinco;
	
	int pri, sec, ter, quarto, quin;
	
	printf("Insira 5 numeros: ");
	scanf("%d, %d, %d, %d, %d,",&um, &dois, &tres, &quatro, &cinco);
	
	if (um == (dois+1) || um == (tres+1) || um == (quatro+1) ||um == (cinco+1)){
			pri = um;
		}
	if (dois == (tres+1) || dois == (quatro+1) || dois == (cinco+1)){
		sec == dois;
		}
		if(tres == (quatro+1) || tres == (cinco+1))
		printf("%d %d %d %d %d", pri, sec, ter, quarto, quin);
		
	return 0;
}
