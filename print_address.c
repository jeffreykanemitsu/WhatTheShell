#include "shell.h"

extern char *environ;
int main(int argc, char *argv[], char *envp[])
{
	printf("Environ: %p\n", &environ);
	printf("Envp: %p\n", &envp);
	return (0);
}
