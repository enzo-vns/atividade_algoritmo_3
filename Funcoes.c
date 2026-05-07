#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Feito por Pedro Torres e Enzo Vieira

int calcularHoras(int total) {
    return total / 3600;
}

int calcularMinutos(int total) {
    return (total % 3600) / 60;
}

int calcularSegundos(int total) {
    return total % 60;
}

int isPar(int numero) {
    return numero % 2 == 0;
}

int isImpar(int numero) {
    return numero % 2 != 0;
}

float media(float a, float b) {
    return (a + b) / 2.0;
}

float maior(float a, float b) {
    if (a > b)
        return a;
    return b;
}

float menor(float a, float b) {
    if (a < b)
        return a;
    return b;
}

// Main

int main() {
    int total, numero;
    float a, b;

    setlocale(LC_ALL, "Portuguese");

    // Exercício 1 - H:m:s
    printf("=== Exercício 1 ===\n");
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total);
    printf("%d segundo(s) = %d hora(s), %d minuto(s) e %d segundo(s)\n\n",
           total, calcularHoras(total), calcularMinutos(total), calcularSegundos(total));

    // Exercício 2 - isPar / isImpar
    printf("=== Exercício 2 ===\n");
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (isPar(numero))
        printf("%d é PAR\n", numero);
    if (isImpar(numero))
        printf("%d é ÍMPAR\n\n", numero);

    // Exercício 3 - média, maior, menor
    printf("=== Exercício 3 ===\n");
    printf("Digite o 1º valor: ");
    scanf("%f", &a);
    printf("Digite o 2º valor: ");
    scanf("%f", &b);
    printf("Média: %.2f\n",  media(a, b));
    printf("Maior: %.2f\n",  maior(a, b));
    printf("Menor: %.2f\n\n", menor(a, b));

    system("pause");
    return 0;
}
