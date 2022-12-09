#include "main.h"

/**
 * print_env - prints the environment variable
*/

void print_env(void)
{
	int index = 0;
	int size = 0;

	while (environ[index] != NULL)
	{
		size = strlen(environ[index]);
		write(1, environ[index], size);
		write(1, "\n", 1);
		index++;
	}
}
