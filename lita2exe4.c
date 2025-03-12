#include <stdio.h>

int a (int n) {
    if (n <= 1) {
        return n;
    } else {
        return a (n - 1) + a (n - 2);
    }
}

int main() {
    int n;

    printf("Digite o valor de n para encontrar o n-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, digite um número inteiro não negativo.\n");
        return 1; 
    } else {
        int resultado = a(n);
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);
    }

    return 0; 
}