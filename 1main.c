#include "shell.h"

int main(int ac, char *av[], char *envp[])
{
	int (*fp);

	fp = find_builtin(argv[0]);
	if (fp == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if (av [0] == fp)
	{
		return (builtins.f);
	}
}
