#include <stdio.h>
#include <stdbool.h>

bool pertence(int elemento, int array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int meuArray[] = {1, 2, 3, 4, 5};
    int TArray = sizeof(meuArray) / sizeof(meuArray[0]);

    int E1 = 3;
    int E2 = 6;

    if (pertence(E1, meuArray, TArray)) {
        printf("%d pertence ao array.\n", E1);
    } else {
        printf("%d não pertence ao array.\n", E1);
    }

    if (pertence(E2, meuArray, TArray)) {
        printf("%d pertence ao array.\n", E2);
    } else {
        printf("%d não pertence ao array.\n",  E2);
    }

    return 0;
}