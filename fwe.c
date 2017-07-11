#include "shell.h"

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	pid_t pid;
	int i, NUM_TIMES, status;

	printf("Parent PID: %d\n", getpid());

	for (i = 0; i <= 4; i++)
	{
		pid = fork();
		if (pid < 0)
		{
			return (-1);
		}
		if (pid == 0)
		{
			printf("Parent PID: %d, Child ID: %d\n", i, getpid());
			execve(argv[0], argv, NULL);
		}
		else
		{
			wait(&status);
		
		}
	}
}
