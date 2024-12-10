/*
01 - Elabore um programa para ler o preço de um produto e a quantidade comprada. 
Calcule o preço total a ser pago e informe o valor na tela.
*/

#include <stdio.h>

float calcular_preco_total(float p, float q) {
    return p * q;
}

int main() {
    float p, q, t;

    printf("Digite o preco unitario do produto: ");
    scanf("%f", &p);

    printf("Digite a quantidade comprada: ");
    scanf("%f", &q);

    t = calcular_preco_total(p, q);

    printf("O preco total a ser pago eh: R$ %.2f\n", t);
}
