#include "main.h"

/**
 * exec - function that executes the commands
 *
 * @args: array that lists commands
 *
 * Return: 1.
 */
int exec(char **args)
{
	pid_t my_pid;
	char *command = args[0];
	int status;

	my_pid = fork();

	if (my_pid == -1)
		perror("Error : fork");

	if (my_pid == 0)
	{
		if (command[0] == '/' || command[0] == '.')
		{
			command = args[0];
		}
		else
			perror("Eroor : no argument");

		if (args[0] == NULL)
			perror("Error : no argument");

		if (command == NULL)
		{
			free(command);
			perror("Error: no command");
			return (0);
		}
		if (execve(command, args, NULL) == -1)
		{
			perror("Error: execve");
			return (0);
		}
	}
	else
		wait(&status);

	return (1);
}
