#include "shell.h"

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("parent process ID: %u\n", ppid);
	return (0);
}
