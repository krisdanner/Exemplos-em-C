/*
06 - Escreva um programa que leia um número inteiro maior do que zero e dentro do intervalo entre 100 e 999. Em seguida, informe a soma de
todos os seus algarismos. Por exemplo, você digitou 135 , então o resultado da soma deve ser 1 + 3 + 5 = 9. Se o número lido não for maior
do que zero, o programa terminará com a mensagem "Número inválido
*/

#include <stdio.h>

int soma_digitos(int numero) {
    int soma = 0, digito;
    while (numero > 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }
    return soma;
}

int main() {
    int numero;

    printf("Digite um número inteiro entre 100 e 999: ");
    scanf("%d", &numero);

    if (numero > 0 && numero < 1000) {
        int resultado = soma_digitos(numero);
        printf("A soma dos dígitos é: %d\n", resultado);
    } else {
        printf("Número inválido.\n");
    }
}
