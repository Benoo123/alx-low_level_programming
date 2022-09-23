#include "main.h"

/**
 * _strcat - concatenates the strings pointed toby @srcto
 * the end of the string pointed to by @dest
 * @dest: string that will be appended 
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char src);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
			

		for (index = 0;
		src[index]; index++)
		dest[dest_len++] = srce[index];

					return(dest);

