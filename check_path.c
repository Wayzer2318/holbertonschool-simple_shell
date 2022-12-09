#include "main.h"

/**
 * check_path - function that checks if the file is in the path.
 *
 * @command: commands entered by the user
 *
 * Return: returns the full path if the file is found in the path
 * otherwise, it returns the same command entered by the user
 */

char *check_path(char *command)
{
	struct stat st;
	int index;
	char *path = get_env("PATH");
	char **ar = split_env(path);
	char *new_path = malloc(sizeof(char) * 64);

	if (new_path == NULL)
	{
		perror("Error : allocation memory");
		return (NULL);
	}
	for (index = 0; ar[index] != NULL; index++)
	{
		new_path[0] = 0;
		strcat(new_path, ar[index]);
		strcat(new_path, "/");
		strcat(new_path, command);

		if (stat(new_path, &st) == 0)
		{
			free(ar);
			return (new_path);
		}
	}
	free(new_path);
	free(ar);
	return (NULL);
}
