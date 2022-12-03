#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#include "word.h"

int main(void)
{
	DDRC = 0xFF;
	DDRA = 0xFF;

	LCD_Init();
	LCD_wBCommand(0x80 | 0x00);
	LCD_wString("Jo OYeon");
	LCD_wBCommand(0x80 | 0x40);
	LCD_wString("An JiYong");
	while (1)
	{
		
	}
	return 0;
}