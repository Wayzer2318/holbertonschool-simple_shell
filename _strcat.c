#include "shell.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: buffer pointer
 * @dest: string pointer
 * Description: concatenates 2 strings.
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0'; j++, ++i)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}

