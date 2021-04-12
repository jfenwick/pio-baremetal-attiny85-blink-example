#include <avr\io.h>
#include <util\delay.h>

void delay(volatile long delayTime)
{
	while (delayTime > 0)
		delayTime--;
}

int main(void)
{
	// Make PB0 an output
	DDRB |= (1 << PB0);

	while(1)
	{
		// Toggle PB0 with XOR
		PORTB ^= (1 << PB0);
		delay(50000);
	}		
}
