#include "main.h"

int main(void)
{
	char *args[] = {NULL, NULL};
	char *command = NULL;
	ssize_t n_bytes = 0;
	size_t command_len = 0;

	while(1)
	{
		printf("$");
		n_bytes = getline(&command, &command_len, stdin);
		command[n_bytes - 1] = '\0';
		execve(*args, args, NULL);
	}
	return(0);
}
