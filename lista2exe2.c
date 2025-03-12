#include <stdio.h>

unsigned long long fatorial_recursivo(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial_recursivo(n - 1);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        unsigned long long resultado = fatorial_recursivo(numero);
        printf("O fatorial de %d é %llu\n", numero, resultado);
    }

    return 0;
}