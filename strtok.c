#include "shell.h"
int main(void)
{
	char str[] = "Hi Tanya, I am tired. It is 2:30 A.M. right now :(";
	char *token;
	int i;

	token = strtok(str, " ");
	for (i = 0; token != NULL; i++)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
	
