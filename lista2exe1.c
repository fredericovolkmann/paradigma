#include <stdio.h>

int main() {
    int numero;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %llu\n", numero, fatorial);
    }
    return 0;
}