3include "main.h"

/**
 * *string_toupper - change string letter to uppercase
 *
 * @stn:string changed
 *
 * Return:the string after chnges
*/
char *string_toupper(char *stn)
{
	int p;

	for (p = 0; stn[p] != '\0'; p++)
	{
		if (stn[p] > 96 && stn[p] < 123)
		{
			stn[p] = stn[p] - 32;
		}
	}
	return (stn);
}
