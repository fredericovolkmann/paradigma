#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int PE[25];
    int TPE = 0;
    int TNG = 0;

    srand(time(NULL));

    while (TPE < 25) {
        int numeroAleatorio = rand() % 100 + 1;
        TNG++;

        if (ehPrimo(numeroAleatorio)) {
            bool encontrado = false;
            for (int i = 0; i < TPE; i++) {
                if (PE[i] == numeroAleatorio) {
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                PE[TPE] = numeroAleatorio;
                TPE++;
            }
        }
    }

    printf("Total de números gerados: %d\n", TNG);

    return 0;
}