#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hr, mt;

	for (hr = 0 ; hr <= 23 ; hr++)
	{
		mt = 0;
		while (mt <= 59)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((mt / 10) + 48);
			_putchar((mt % 10) + 48);
			_putchar('\n');

			mt++;
		}
	}

}
