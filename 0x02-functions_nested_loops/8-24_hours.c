#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: prints every minute of the day of starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour <= 23)
	{
		while (min <= 59)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(min + '0');
			min++;
		}
		hour++;
	}
}
