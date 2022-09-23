#include "main.h"
/**
 * _strncat - concatenate two strings but add inputed number of bytes
 * @dest: string to be appended upon
 * @src: stringto br completedat the end of dest 
 * @n:integer parameter to compare index to 
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0; dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; str[index] && index < n; index++)

		dest[dest_len++] = src[index];

	return (dest);
}
