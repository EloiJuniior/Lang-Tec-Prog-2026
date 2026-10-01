#include <stdio.h>
#include <stdlib.h>

void exercicio1() {
    int capacidade, qtd_itens, n_mochilas, resto;

    printf("Insira a quantidade de itens: ");
    scanf("%d", &qtd_itens);

    printf("Insira a capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    if (capacidade <= 0) {
        printf("Capacidade invalida.\n");
        return;
    }

    n_mochilas = qtd_itens / capacidade;
    resto = qtd_itens % capacidade;

    printf("%d mochilas sao necessarias e sobram %d itens.\n",
           n_mochilas, resto);
}

void exercicio2() {
    int n1, n2, n3, n4, n5;
    int encontrou = 0;

    printf("Digite 5 numeros inteiros:\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if (n2 == n1 + 1) {
        printf("Consecutivos: %d e %d\n", n1, n2);
        encontrou = 1;
    }

    if (n3 == n2 + 1) {
        printf("Consecutivos: %d e %d\n", n2, n3);
        encontrou = 1;
    }

    if (n4 == n3 + 1) {
        printf("Consecutivos: %d e %d\n", n3, n4);
        encontrou = 1;
    }

    if (n5 == n4 + 1) {
        printf("Consecutivos: %d e %d\n", n4, n5);
        encontrou = 1;
    }

    if (!encontrou) {
        printf("Nenhum numero consecutivo foi encontrado.\n");
    }
}

void exercicio3() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida.\n");
        return;
    }

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc <= 24.9) {
        printf("Classificacao: Normal\n");
    } else if (imc <= 29.9) {
        printf("Classificacao: Acima do peso\n");
    } else {
        printf("Classificacao: Obeso\n");
    }
}

void exercicio4() {
    int A = 6, B = 0, C = 0;

    printf("Estado inicial: A = %d, B = %d, C = %d\n", A, B, C);

    A -= 1;
    C += 1;
    printf("1. Disco 1: A -> C | A = %d, B = %d, C = %d\n", A, B, C);

    A -= 2;
    B += 2;
    printf("2. Disco 2: A -> B | A = %d, B = %d, C = %d\n", A, B, C);

    C -= 1;
    B += 1;
    printf("3. Disco 1: C -> B | A = %d, B = %d, C = %d\n", A, B, C);

    A -= 3;
    C += 3;
    printf("4. Disco 3: A -> C | A = %d, B = %d, C = %d\n", A, B, C);

    B -= 1;
    A += 1;
    printf("5. Disco 1: B -> A | A = %d, B = %d, C = %d\n", A, B, C);

    B -= 2;
    C += 2;
    printf("6. Disco 2: B -> C | A = %d, B = %d, C = %d\n", A, B, C);

    A -= 1;
    C += 1;
    printf("7. Disco 1: A -> C | A = %d, B = %d, C = %d\n", A, B, C);
}

void exercicio5() {
    int n1, n2, n3, n4;

    printf("Digite 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("\nNumeros impares:\n");

    if (n1 % 2 != 0)
        printf("%d\n", n1);

    if (n2 % 2 != 0)
        printf("%d\n", n2);

    if (n3 % 2 != 0)
        printf("%d\n", n3);

    if (n4 % 2 != 0)
        printf("%d\n", n4);

    printf("\nMultiplos de 5:\n");

    if (n1 % 5 == 0)
        printf("%d\n", n1);

    if (n2 % 5 == 0)
        printf("%d\n", n2);

    if (n3 % 5 == 0)
        printf("%d\n", n3);

    if (n4 % 5 == 0)
        printf("%d\n", n4);
}

void exercicio6() {
    float valor, resultado;
    int codigo;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite o codigo da conversao: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            resultado = (valor - 32) / 1.8;
            printf("Resultado: %.2f Celsius (C)\n", resultado);
            break;

        case 2:
            resultado = valor + 273.15;
            printf("Resultado: %.2f Kelvin (K)\n", resultado);
            break;

        case 3:
            resultado = valor - 273.15;
            printf("Resultado: %.2f Celsius (C)\n", resultado);
            break;

        case 4:
            resultado = valor / 1609.34;
            printf("Resultado: %.2f Milhas (mi)\n", resultado);
            break;

        case 5:
            resultado = valor * 1609.34;
            printf("Resultado: %.2f Metros (m)\n", resultado);
            break;

        case 8:
            resultado = valor * 2.205;
            printf("Resultado: %.2f Libras (lb)\n", resultado);
            break;

        case 9:
            resultado = valor / 2.205;
            printf("Resultado: %.2f Quilogramas (kg)\n", resultado);
            break;

        case 10:
            resultado = valor / 1.609;
            printf("Resultado: %.2f mph\n", resultado);
            break;

        case 11:
            resultado = valor * 1.609;
            printf("Resultado: %.2f km/h\n", resultado);
            break;

        default:
            printf("Erro: codigo de unidade invalido!\n");
    }
}

void exercicio7() {
    int a, b, c, temp;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("Os numeros tem que ser distintos.\n");
    } else {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (a > c) {
            temp = a;
            a = c;
            c = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        printf("%d %d %d\n", a, b, c);
    }
}

void exercicio8() {
    float valor1, valor2;
    int codigo;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o codigo da operacao (1 a 4): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            if (valor1 > valor2)
                printf("Verdadeiro\n");
            else
                printf("Falso\n");
            break;

        case 2:
            if (valor1 < valor2)
                printf("Verdadeiro\n");
            else
                printf("Falso\n");
            break;

        case 3:
            if (valor1 == valor2)
                printf("Verdadeiro\n");
            else
                printf("Falso\n");
            break;

        case 4:
            if (valor1 != valor2)
                printf("Verdadeiro\n");
            else
                printf("Falso\n");
            break;

        default:
            printf("Operador invalido\n");
    }
}

int main() {
    int opcao;

    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Mochilas\n");
        printf("2 - Numeros consecutivos\n");
        printf("3 - IMC\n");
        printf("4 - Torre de Hanoi\n");
        printf("5 - Impares e multiplos de 5\n");
        printf("6 - Conversao de unidades\n");
        printf("7 - Numeros distintos em ordem crescente\n");
        printf("8 - Operacoes relacionais\n");
        printf("0 - Sair\n");
        printf("==========================\n");

        printf("Escolha o exercicio: ");
        scanf("%d", &opcao);

        printf("\n");

        switch (opcao) {
            case 1:
                exercicio1();
                break;

            case 2:
                exercicio2();
                break;

            case 3:
                exercicio3();
                break;

            case 4:
                exercicio4();
                break;

            case 5:
                exercicio5();
                break;

            case 6:
                exercicio6();
                break;

            case 7:
                exercicio7();
                break;

            case 8:
                exercicio8();
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
