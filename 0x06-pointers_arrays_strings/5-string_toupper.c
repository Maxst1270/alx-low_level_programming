3include "main.h"

/**
 * *string_toupper - change string letter to uppercase
 *
 * @ : parameter
 *
 * Return:the string after chnges
*/
char *string_toupper(char *)
{
	int p = 0;

	while (str[p] != '\0')
	{
		if (str[p] >= 97 && str[p] <= 122)
		{
			str[p] = str[p] - 32;
		}
		p++;
	}
	return (str);
}
