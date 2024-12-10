/*
01 - Elabore um programa para ler o preço de um produto e a quantidade comprada. 
Calcule o preço total a ser pago e informe o valor na tela.
*/

#include <stdio.h>

float calcular_preco_total(float preco_unitario, float quantidade) {
    return preco_unitario * quantidade;
}

int main() {
    float preco, quantidade, total;

    printf("Digite o preço unitário do produto: ");
    scanf("%f", &preco);

    printf("Digite a quantidade comprada: ");
    scanf("%f", &quantidade);

    total = calcular_preco_total(preco, quantidade);

    printf("O preço total a ser pago é: R$ %.2f\n", total);
}
