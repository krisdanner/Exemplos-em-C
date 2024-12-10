/* 2) Elabore um programa que leia o custo (valor inteiro em reais) de uma hora de trabalho de um profissional e
o tempo que ele trabalhou. Em seguida, calcule o valor total que ele deve receber e apresente essa informação na tela.*/

#include <stdio.h>
float calcular_valor_total(int custo_hora, float horas_trabalhadas) {
    if (custo_hora < 0 || horas_trabalhadas < 0) {
        printf("Valores inválidos. Custo por hora e horas trabalhadas devem ser positivos.\n");
        return -1;
    }
    return custo_hora * horas_trabalhadas;
}

int main() {
    int custo_hora;
    float horas_trabalhadas, valor_total;

    // Entrada de dados
    printf("Digite o custo por hora (em reais): ");
    scanf("%d", &custo_hora);

    printf("Digite o tempo trabalhado (em horas): ");
    scanf("%f", &horas_trabalhadas);

    // Cálculo do valor total
    valor_total = calcular_valor_total(custo_hora,horas_trabalhadas);

    // Saída formatada
    printf("O valor total a ser pago é: R$ %.2f\n", valor_total);
}