#include "shell.h"
int _env(void)
{
	int x, y;

	for (x = 0; environ[x] != '\0'; x++)
	{
		for (y = 0; environ[x][y] != '\0'; y++)
		{
			write(STDOUT_FILENO, &environ[x][y], 1);
		}
		write (STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
