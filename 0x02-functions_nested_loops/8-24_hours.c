#include "main.h"
#define MAX_MINUTES 1440

/**
 * jack_bauer - print erevy minute
 */
void jack_bauer(void)
{
	int minutes = 0;

	while (minutes < MAX_MINUTES)
	{
		int minute = minutes % 60;
		int hour = minutes / 60;

		_putchar ('0' + hour / 10);
		_putchar ('0' + hour % 10);
		_putchar (':');
		_putchar ('0' + minute / 10);
		_putchar ('0' + minute % 10);
		_putchar ('\n');

		++minutes;
	}
}
