#include "shell.h"

int main(int argc, char *argv[])
{
	struct stat buf;
	char mtime[100];

	stat("myfile.txt", &buf);

	printf("st_mode = %o\n", buf.st_mode);

	strcpy(mtime, ctime(&buf.st_mtime));

	printf("st_mtime = %s\n", mtime);

	return (0);
}
