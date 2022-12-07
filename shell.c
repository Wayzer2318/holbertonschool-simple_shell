#include "main.h"
/**
 * main - basic simple shell
 * Return: nothing
 */
int main(void)
{
	char *args[] = {NULL, NULL};
	char *command = NULL;
	ssize_t n_bytes = 0;
	size_t command_len = 0;
	char **str = NULL;

	while (1)
	{
		printf("$ ");
		n_bytes = getline(&command, &command_len, stdin);
		command[n_bytes - 1] = '\0';

		args[0] = command;
		if (fork() == 0)
		{
			execve(*args, args, NULL);
			dprintf(STDERR_FILENO, "%s : command not found.\n", *args);
			exit(1);
		}
		else
			wait(NULL);
		str = split_line(command);
		if (_strcmp(str[0], "exit\n") == 0)
		{
			free(str);
			exit(EXIT_SUCCESS);
		}
	}
	return (0);
}
