#include "main.h"

/**
 * split_env - function that tokenizes the path
 * @path: path to be tokenize
 * Return: argv pointer
*/

char **split_env(char *path)
{
	int path_size = 1024;
	char *token = NULL;
	char **argv = NULL;
	int index = 0;

	argv = malloc(path_size * sizeof(char *));

		if (argv == NULL)
		{
			perror("Error : allocation memory");
			return (0);
		}
		token = strtok(path, ":");

		while (token != NULL)
		{
			argv[index] = token;
			index++;
			token = strtok(NULL, ":");
		}
		argv[index] = NULL;

	return (argv);
}
