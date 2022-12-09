#include "shell.h"

/**
 * _signal - Checks if a signal is in input.
 *
 * @sig: Input signal value.
 */

void _signal(int sig)
{
	if (sig == SIGINT)
		write(1, "\n Hasta la vista, baby \n", 24);
}

