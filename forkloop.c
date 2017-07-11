#include "shell.h"

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= 2; i++)
	{
		fork();
		printf("%d: My PID = %d\n", i, (int) getpid());
	}
	sleep(1);
	printf("--> My PID = %d\n", (int) getpid());
	return (0);
}
