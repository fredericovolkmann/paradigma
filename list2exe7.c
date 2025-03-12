#include <stdio.h>

int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int ehPerfeito(int num) {
    if (somaDivisores(num) == num) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    }

    if (ehPerfeito(num)) {
        printf("%d é um número perfeito.\n", num);
    } else {
        printf("%d não é um número perfeito.\n", num);
    }

    return 0;
}