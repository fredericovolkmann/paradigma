#include <stdio.h>

int contarDigitos(int num) {
    
    if (num == 0) {
        return 0;
    }
    
    else {
        return 1 + contarDigitos(num / 10);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int quantidadeDigitos = contarDigitos(numero);
    printf("O número %d possui %d dígitos.\n", numero, quantidadeDigitos);

    return 0;
}