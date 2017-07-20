#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void handler(int sig)
{
  putchar('\n');
}

int main(void)
{
  char *line = NULL;
  size_t n;
  signal(SIGINT, handler);
  while (1)
    {
      if (getline(&line, &n, stdin) == -1)
	break;
      printf("%s", line);
    }
  free(line);
  exit(0);
}
