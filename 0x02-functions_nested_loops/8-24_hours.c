#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: prints every minute of the day of starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min= 0; min <= 59; min++)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(min + '0');
			min++;
		}
	}
}
