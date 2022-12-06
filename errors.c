#include "main.h"

/**
 * errors - print errors
 * error: the errors
 * Return: void
 */
void errors(int error)
{
	switch (error)
	{
	case 1: /* fork error (stderr)*/
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("Error");
		break;

	case 2: /* execve error (stderr) */
		perror("Error");
		break;

	case 3: /* malloc error (stderr) */
		write(STDERR_FILENO, ERR_MALLOC, _strelen(ERR_MALLOC));
		break;

	case 4: /* empty path error (stderr) */
		write(STDERR_FILENO, ERR_PATH, _strlen(ERR_PATH));
		break;

	default;
	return;
	}
}
