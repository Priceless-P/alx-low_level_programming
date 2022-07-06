#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Description: prints every minute of the day of starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else if (hour >=)
			{
				_putchar((hour / 10) + '0');
				__putchar((hours % 10) + '0');
			}
			if (min < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(min + '0');
			}
			else if (min > 10)
			{
				_putchar(':');
				_putchar((minute / 10) + '0');
				_putchar((minute % 10) + '0');
			}
			min++;
		}
		hour++;
		_putchar('\n');
	}
}
