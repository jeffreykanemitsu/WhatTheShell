#include "shell.h"
/**
 * main - shell
 *
 * Return: shell
 */
int main(void)
{
	char *buffer, *token, *argv[1024];
	int value, status;
	size_t buffer_size;
	pid_t pid, childpid;
	unsigned int i;

	write(1, "$ ", 2);

	value = getline(&buffer, &buffer_size, stdin);
	while (value != -1)
	{
		token = strtok(buffer, " \n");

		for (i = 0; token != NULL; i++)
		{
			argv[i] = token;
			token = strtok(NULL, " \n");
		}
		argv[i] = NULL;

		pid = fork();

		if (pid < 0)
		{
			perror("Error");
			return (1);
		}
		if (pid == 0)
		{
			execve(argv[0], argv, NULL);
			perror("Error execve");
			return (1);
		}
		else
		{
			wait(&status);
			write(1, "$ ", 2);
			getline(&buffer, &buffer_size, stdin);
		}
	}
	return (0);
}
