/*
 * Disciplina: Linguagem e Técnicas de Programação
 * Atividade : Laço, Vetor e Função
 * Todos os exercícios em um único código fonte.
 * A função main chama cada exercício na ordem (1 a 7).
 *
 * Compilar: gcc lista_exercicios.c -o lista -lm
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N100 100

/* ------------------------------------------------------------------ */
/* Exercício 1                                                         */
/* Lê 100 inteiros, imprime na ordem inversa da leitura e depois       */
/* ordenados do maior para o menor.                                    */
/* ------------------------------------------------------------------ */
void exercicio1(void) {
    int v[N100], ordenado[N100];
    int i, j, aux;

    printf("\n=== Exercicio 1 ===\n");
    printf("Digite %d numeros inteiros:\n", N100);
    for (i = 0; i < N100; i++) {
        scanf("%d", &v[i]);
        ordenado[i] = v[i];            /* copia para ordenar sem perder a ordem original */
    }

    /* Impressão na ordem inversa da leitura */
    printf("\nOrdem inversa da leitura:\n");
    for (i = N100 - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    /* Ordenação decrescente (Bubble Sort) */
    for (i = 0; i < N100 - 1; i++) {
        for (j = 0; j < N100 - 1 - i; j++) {
            if (ordenado[j] < ordenado[j + 1]) {
                aux = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = aux;
            }
        }
    }

    printf("\nOrdenados do maior para o menor:\n");
    for (i = 0; i < N100; i++) {
        printf("%d ", ordenado[i]);
    }
    printf("\n");
}

/* ------------------------------------------------------------------ */
/* Exercício 2                                                         */
/* Lê um double positivo e imprime em notação científica A x 10^n,     */
/* com 1 <= A < 10 e n inteiro. Feito manualmente (sem %e).            */
/* ------------------------------------------------------------------ */
void exercicio2(void) {
    double valor, a;
    int expoente = 0;

    printf("\n=== Exercicio 2 ===\n");
    printf("Digite um valor positivo (double): ");
    scanf("%lf", &valor);

    if (valor <= 0) {
        printf("Considere somente valores positivos.\n");
        return;
    }

    a = valor;
    /* Se A >= 10, divide por 10 e aumenta o expoente */
    while (a >= 10.0) {
        a /= 10.0;
        expoente++;
    }
    /* Se A < 1, multiplica por 10 e diminui o expoente */
    while (a < 1.0) {
        a *= 10.0;
        expoente--;
    }

    printf("%f = %f x 10^%d\n", valor, a, expoente);
}

/* ------------------------------------------------------------------ */
/* Exercício 3                                                         */
/* Lê n (1 <= n <= 64) e mostra o valor em binário.                    */
/* ------------------------------------------------------------------ */
void imprimeBinario(unsigned long long n) {
    int i, achouPrimeiroUm = 0;

    /* Percorre do bit mais significativo (63) ao menos significativo (0) */
    for (i = 63; i >= 0; i--) {
        int bit = (n >> i) & 1ULL;
        if (bit == 1) achouPrimeiroUm = 1;
        if (achouPrimeiroUm) printf("%d", bit);   /* ignora zeros à esquerda */
    }
    if (!achouPrimeiroUm) printf("0");
    printf("\n");
}

void exercicio3(void) {
    unsigned long long n;

    printf("\n=== Exercicio 3 ===\n");
    do {
        printf("Digite n (positivo e <= 64): ");
        scanf("%llu", &n);
    } while (n < 1 || n > 64);

    printf("%llu em binario = ", n);
    imprimeBinario(n);
}

/* ------------------------------------------------------------------ */
/* Exercício 4 (URI 1013)                                              */
/* Lê 10 valores e mostra o maior seguido de "eh o maior".             */
/* MaiorAB = (a + b + abs(a - b)) / 2  -> maior entre dois valores.    */
/* Segundo passo: aplicar a fórmula repetidamente (maior atual x novo).*/
/* ------------------------------------------------------------------ */
int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

void exercicio4(void) {
    int v[10], i, maior;

    printf("\n=== Exercicio 4 ===\n");
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    maior = maiorAB(v[0], v[1]);        /* primeiro passo: entre os dois primeiros */
    for (i = 2; i < 10; i++) {          /* segundo passo: compara com os demais */
        maior = maiorAB(maior, v[i]);
    }

    printf("%d eh o maior\n", maior);
}

/* ------------------------------------------------------------------ */
/* Exercício 5                                                         */
/* Vetor de 100 inteiros: verifica paridade e primalidade de cada item.*/
/* O vetor é preenchido com valores aleatórios entre 1 e 200.          */
/* ------------------------------------------------------------------ */
int ehPrimo(int n) {
    int i;
    if (n < 2) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void exercicio5(void) {
    int v[N100], i;

    printf("\n=== Exercicio 5 ===\n");
    srand((unsigned) time(NULL));
    for (i = 0; i < N100; i++) {
        v[i] = rand() % 200 + 1;
    }

    for (i = 0; i < N100; i++) {
        printf("v[%d] = %3d -> %s, %s\n", i, v[i],
               (v[i] % 2 == 0) ? "par" : "impar",
               ehPrimo(v[i]) ? "primo" : "nao primo");
    }
}

/* ------------------------------------------------------------------ */
/* Exercício 6                                                         */
/* 4 vetores de 10 posições: x1[], y1[], x2[], y2[].                   */
/* Para cada posição i, p1 = (x1[i], y1[i]) e p2 = (x2[i], y2[i]).     */
/* Distância euclidiana: d = sqrt((x2-x1)^2 + (y2-y1)^2)               */
/* ------------------------------------------------------------------ */
double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void exercicio6(void) {
    double x1[10], y1[10], x2[10], y2[10];
    int i;

    printf("\n=== Exercicio 6 ===\n");
    printf("Digite os 10 valores de x1:\n");
    for (i = 0; i < 10; i++) scanf("%lf", &x1[i]);
    printf("Digite os 10 valores de y1:\n");
    for (i = 0; i < 10; i++) scanf("%lf", &y1[i]);
    printf("Digite os 10 valores de x2:\n");
    for (i = 0; i < 10; i++) scanf("%lf", &x2[i]);
    printf("Digite os 10 valores de y2:\n");
    for (i = 0; i < 10; i++) scanf("%lf", &y2[i]);

    for (i = 0; i < 10; i++) {
        printf("p1(%.2f, %.2f) e p2(%.2f, %.2f): distancia = %.2f\n",
               x1[i], y1[i], x2[i], y2[i],
               distancia(x1[i], y1[i], x2[i], y2[i]));
    }
}

/* ------------------------------------------------------------------ */
/* Exercício 7                                                         */
/* Lê 100 inteiros e mostra os valores que estão em ordem consecutiva  */
/* (posições vizinhas em que cada valor é o anterior + 1, ex.: 4 5 6). */
/* ------------------------------------------------------------------ */
void exercicio7(void) {
    int v[N100], i, encontrou = 0;

    printf("\n=== Exercicio 7 ===\n");
    printf("Digite %d numeros inteiros:\n", N100);
    for (i = 0; i < N100; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nValores em ordem consecutiva:\n");
    i = 0;
    while (i < N100 - 1) {
        if (v[i + 1] == v[i] + 1) {
            /* início de uma sequência consecutiva */
            encontrou = 1;
            printf("Sequencia: %d", v[i]);
            while (i < N100 - 1 && v[i + 1] == v[i] + 1) {
                i++;
                printf(" %d", v[i]);
            }
            printf("\n");
        }
        i++;
    }

    if (!encontrou) {
        printf("Nenhum valor em ordem consecutiva.\n");
    }
}

/* ------------------------------------------------------------------ */
int main(void) {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    return 0;
}
