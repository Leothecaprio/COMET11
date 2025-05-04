#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // Set PD2 and PD3 as input for buttons
    DDRD &= ~((1 << PD2) | (1 << PD3));
    PORTD |= (1 << PD2) | (1 << PD3);  // Enable pull-up resistors

    // Set PB0 and PB1 as output for LEDs
    DDRB |= (1 << PB0) | (1 << PB1);
    PORTB &= ~((1 << PB0) | (1 << PB1));

    while (1) {
        // Read button states (active LOW, so invert)
        uint8_t p1 = !(PIND & (1 << PD2));  // 1 if pressed
        uint8_t p2 = !(PIND & (1 << PD3));  // 1 if pressed

        // Logic gate outputs
        uint8_t nand_out = !(p1 & p2);  // LED1
        uint8_t nor_out = !(p1 | p2);   // LED2

        // Set LED1
        if (nand_out)
            PORTB |= (1 << PB0);  // ON
        else
            PORTB &= ~(1 << PB0); // OFF

        // Set LED2
        if (nor_out)
            PORTB |= (1 << PB1);  // ON
        else
            PORTB &= ~(1 << PB1); // OFF

        _delay_ms(20);
    }
}
