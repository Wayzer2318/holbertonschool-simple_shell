#include "main.h"

/**
 * *_strcpy - function that copies the string
 * @src: buffer pointer
 * @dest: string pointer
 * Description: copies from buffer to output
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
