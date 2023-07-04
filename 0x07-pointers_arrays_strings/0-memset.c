#include "main.h"
/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ate;
	for (ate = 0; n > 0; ate++, n--)
		{
			s[ate] = b;
		}
return (s);
}


