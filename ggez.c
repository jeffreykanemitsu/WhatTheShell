#include "shell.h"
int main(void)
{
	char *buffer, *token, *argv[1024];
	int value, status;
	size_t buffer_size;
	pid_t pid;
	unsigned int i;

	write(STDOUT_FILENO, "$ ", 2);
	
	value = getline(&buffer, &buffer_size, stdin);
	if (value == -1)
	{
		return (1);
	}

	token = strtok(buffer, " ");

	for (i = 0; token != NULL; i++)
	{
		argv[i] = token;
		token = strtok(NULL, " ");
	}
	argv[i] = NULL;

	pid = fork();

	if (pid < 0)
	{
		return (1);
	}
	if (pid == 0)
	{
		execve(argv[0], argv, NULL);
	}
	else
	{
		wait(&status);	
	}
	return(1);
}
