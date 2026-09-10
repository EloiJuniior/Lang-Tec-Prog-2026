#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5, n6;
    int n7, n8, n9, n10, n11;

    int soma;
    int resto;
    int primeiroDigito;
    int segundoDigito;

    // Entrada dos 11 digitos do CPF

    printf("Digite o 1o numero do CPF: ");
    scanf("%d", &n1);

    printf("Digite o 2o numero do CPF: ");
    scanf("%d", &n2);

    printf("Digite o 3o numero do CPF: ");
    scanf("%d", &n3);

    printf("Digite o 4o numero do CPF: ");
    scanf("%d", &n4);

    printf("Digite o 5o numero do CPF: ");
    scanf("%d", &n5);

    printf("Digite o 6o numero do CPF: ");
    scanf("%d", &n6);

    printf("Digite o 7o numero do CPF: ");
    scanf("%d", &n7);

    printf("Digite o 8o numero do CPF: ");
    scanf("%d", &n8);

    printf("Digite o 9o numero do CPF: ");
    scanf("%d", &n9);

    printf("Digite o 10o numero do CPF: ");
    scanf("%d", &n10);

    printf("Digite o 11o numero do CPF: ");
    scanf("%d", &n11);


    // Verifica se todos os numeros sao iguais

    if (n1 == n2 && n2 == n3 && n3 == n4 &&
        n4 == n5 && n5 == n6 && n6 == n7 &&
        n7 == n8 && n8 == n9 && n9 == n10 &&
        n10 == n11) {

        printf("\nCPF Invalido!\n");

        return 0;
    }


    // =================================
    // CALCULO DO PRIMEIRO DIGITO
    // =================================

    soma = (n1 * 10) +
           (n2 * 9) +
           (n3 * 8) +
           (n4 * 7) +
           (n5 * 6) +
           (n6 * 5) +
           (n7 * 4) +
           (n8 * 3) +
           (n9 * 2);

    resto = (soma * 10) % 11;


    if (resto == 10) {
        primeiroDigito = 0;
    } else {
        primeiroDigito = resto;
    }


    // Verifica o primeiro digito

    if (primeiroDigito != n10) {

        printf("\nCPF Invalido!\n");

        return 0;
    }


    // =================================
    // CALCULO DO SEGUNDO DIGITO
    // =================================

    soma = (n1 * 11) +
           (n2 * 10) +
           (n3 * 9) +
           (n4 * 8) +
           (n5 * 7) +
           (n6 * 6) +
           (n7 * 5) +
           (n8 * 4) +
           (n9 * 3) +
           (n10 * 2);

    resto = (soma * 10) % 11;


    if (resto == 10) {
        segundoDigito = 0;
    } else {
        segundoDigito = resto;
    }


    // Verifica o segundo digito

    if (segundoDigito != n11) {

        printf("\nCPF Invalido!\n");

        return 0;
    }


    // CPF valido

    printf("\nCPF Valido!\n");

    return 0;
}
```

}

