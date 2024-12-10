#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() 
{
    system("cls");
    setlocale(LC_ALL, "pt-br"); // Configura a localidade para a do sistema
    printf("Olá, mundo! Com acentos: áéíóú ç ãõ\n");

}