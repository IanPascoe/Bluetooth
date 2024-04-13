#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN 3 // Pin connected to LED

int main(void) {
    DDRD |= (1 << LED_PIN); // Set the LED pin as an output

    while (1) {
        PORTD ^= (1 << LED_PIN); // Toggle the LED pin
        _delay_ms(500); // Delay for 500 milliseconds
    }

    return 0;
}