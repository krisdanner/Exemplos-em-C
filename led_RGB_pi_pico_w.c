/*
#===========================================#
# Autor: Christian Danner Ramos de Carvalho #
# e-mail: eng.chrisdanner@gmail.com         #
# 09/01/2024                                #
#===========================================#
*/

#include "pico/stdlib.h"

// Definição dos pinos para o LED RGB
#define RED_PIN 13   // Pino do LED vermelho
#define GREEN_PIN 11 // Pino do LED verde
#define BLUE_PIN 12  // Pino do LED azul

// Função para desligar todos os LEDs
void turn_off_leds() {
    gpio_put(RED_PIN, 0);
    gpio_put(GREEN_PIN, 0);
    gpio_put(BLUE_PIN, 0);
}

// Função para acender uma combinação específica de LEDs
void set_color(bool red, bool green, bool blue) {
    gpio_put(RED_PIN, red); 
    gpio_put(GREEN_PIN, green);
    gpio_put(BLUE_PIN, blue);
}

int main() {
    // Inicializa os GPIOs dos LEDs como saída
    gpio_init(RED_PIN);
    gpio_set_dir(RED_PIN, GPIO_OUT);

    gpio_init(GREEN_PIN);
    gpio_set_dir(GREEN_PIN, GPIO_OUT);

    gpio_init(BLUE_PIN);
    gpio_set_dir(BLUE_PIN, GPIO_OUT);

    while (true) {
        // Vermelho
        set_color(1, 0, 0);
        sleep_ms(500);
        turn_off_leds();
        sleep_ms(500);

        // Verde
        set_color(0, 1, 0);
        sleep_ms(500);
        turn_off_leds();
        sleep_ms(500);

        // Azul
        set_color(0, 0, 1);
        sleep_ms(500);
        turn_off_leds();
        sleep_ms(500);

        // Branco (Vermelho + Verde + Azul)
        set_color(1, 1, 1);
        sleep_ms(500);
        turn_off_leds();
        sleep_ms(500);
    }
}