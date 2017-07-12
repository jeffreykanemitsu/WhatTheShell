#include "shell.h"
int main(void)
{
	char *buffer;
	int value;
	size_t buffer_size;

	buffer = malloc(sizeof(char) * buffer_size);
	if (buffer == NULL)
	{
		return (1);
	}
	printf("$ ");
	value = getline(&buffer, &buffer_size, stdin);
	if (value == -1)
	{
		return (1);
	}
	free(buffer);
	return (0);
}
