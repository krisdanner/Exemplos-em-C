/*
09 - Escreva um programa que permita ao usuário escolher uma faixa de salário (1 para até R$ 2.000, 2 para de R$ 2.000 a R$ 5.000, 3 para
acima de R$ 5.000) e informe o valor do salário bruto. Utilize um switch para calcular o valor do imposto devido com base na faixa escolhida,
considerando as seguintes alíquotas:
• Faixa 1: 5%
• Faixa 2: 10%
• Faixa 3: 15
*/

#include <stdio.h>

float calcularImposto(int faixa, float salarioBruto) {
    float aliquota;

    switch (faixa) {
        case 1:
            aliquota = 0.05;
            break;
        case 2:
            aliquota = 0.10;
            break;
        case 3:
            aliquota = 0.15;
            break;
        default:
            return -1; 
    }
    return salarioBruto * aliquota;
}

int main() {
    int faixaSalarial;
    float salarioBruto, imposto;

    printf("Escolha a faixa salarial:\n");
    printf("1 - Até R$ 2.000\n");
    printf("2 - De R$ 2.000 a R$ 5.000\n");
    printf("3 - Acima de R$ 5.000\n");
    scanf("%d", &faixaSalarial);

    printf("Digite o seu salário bruto: R$ ");
    scanf("%f", &salarioBruto);

    imposto = calcularImposto(faixaSalarial, salarioBruto);

    if (imposto >= 0) {
        printf("O valor do imposto a ser pago é: R$ %.2f\n", imposto);
    } else {
        printf("Faixa salarial inválida.\n");
    }
}

