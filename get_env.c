#include "main.h"

/**
 * get_env - function that gets the path
 * @command: command entered by the user
 *
 * Return: NULL.
 */

char *get_env(char *command)
{
	int index, size;

	size = strlen(command);

	for (index = 0; environ[index]; index++)
	{
		if (strncmp(environ[index], command, size) == 0)
		return (environ[index] + size + 1);
	}
	return (NULL);
}
