#include <stdio.h>

int main() {
    int n, pt = 0, st = 1, prox.t, i;

    printf("Digite o valor de n para encontrar o n-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Indica um erro
    } else if (n == 1) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, pt);
    } else if (n == 2) {
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, st);
    } else {
        for (i = 3; i <= n; i++) {
            prox.t = pt + st;
            pt = st;
            st = prox.t;
        }
        printf("O %dº termo da sequência de Fibonacci é: %d\n", n, prox.t);
    }

    return 0;
}