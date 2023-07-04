#include "main.h"
/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ate;

	for (ate = 0; ate < n; ate++)
	{
		dset[ate] = src[ate];
	}
	return (dest);
}
