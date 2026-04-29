#ifndef PINS_H
#define PINS_H

#include <avr/io.h>

#define LED_DDR   DDRB
#define LED_PORT  PORTB
#define LED_PIN   PB5

#define RED_LED_DDR   DDRD
#define RED_LED_PORT  PORTD
#define RED_LED_PIN   PD3

#define GREEN_LED_DDR   DDRD
#define GREEN_LED_PORT  PORTD
#define GREEN_LED_PIN   PD2

#define BUTTON_DDR   DDRB
#define BUTTON_PORT  PORTB
#define BUTTON_PIN   PB4


#endif