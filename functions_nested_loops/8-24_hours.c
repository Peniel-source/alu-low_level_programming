#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/* Print hour digits */
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			/* Print time separator */
			_putchar(':');

			/* Print minute digits */
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');

			/* Print new line */
			_putchar('\n');
		}
	}
}
