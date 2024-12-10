#include <stdio.h>

// Função para calcular o fatorial de um número
unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

unsigned long long fatorial_r(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial_r(n - 1);
}

int main() {
    int numero;

    // Solicita um número ao usuário
    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    // Verifica se o número é válido
    if (numero < 0) {
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        // Calcula e exibe o fatorial
        printf("O fatorial de %d é %llu\n", numero, fatorial(numero));
        printf("O fatorial de %d é %llu\n", numero, fatorial_r(numero));
    }

    return 0;
}