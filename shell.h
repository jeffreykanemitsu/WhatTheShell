#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

typedef struct builtins
{
	char *cmd;
	int(*f)();
} builtins_t;
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
int _env(char *envp[]);
int __exit(void);
extern char **environ;
char *_getenv(const char *name);
#endif
