#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validarCPF(char cpf[]) {
    
    if (strlen(cpf) != 11) {
        return false;
    }

    
    bool TDI = true;
    for (int i = 1; i < 11; i++) {
        if (cpf[i] != cpf[0]) {
             TDI = false;
            break;
        }
    }
    if (TDI) {
        return false;
    }

    
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int PDV = 11 - (soma % 11);
    if (PDV >= 10) {
        PDV = 0;
    }

    
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int SDV = 11 - (soma % 11);
    if (SDV >= 10) {
         SDV = 0;
    }

    
    if ((cpf[9] - '0') == PDV && (cpf[10] - '0') == SDV) {
        return true; 
    } else {
        return false; 
    }
}

int main() {
    char cpf[12];

    printf("Digite o CPF (XXXXXXXXXXX): ");
    scanf("%s", cpf);

    if (validarCPF(cpf)) {
        printf("CPF válido.\n");
    } else {
        printf("CPF inválido.\n");
    }

    return 0;
}