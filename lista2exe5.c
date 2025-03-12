#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int e_Primo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int PE= 0;
    int TNG = 0;
    srand(time(NULL));

    while (PE < 25) {
        
        int NA= rand() % 100 + 1;
        TNG++;

    
        if (ehPrimo(NA)) {
            PE++;
        }
    }

    printf("Total de números gerados: %d\n", TNG);

    return 0;
}