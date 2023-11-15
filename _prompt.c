#include "shell.h"

/*
 * Entry point
 * Description: make our own shell
 * Return: 0
 */

int main(int ac, char **argv)
{
char *prompt = "(hdshell) $ ";
char *sentptr = Null;
size_t n = 0;
ssize_t nchars_type;
char *sentptr_copy = Null;
const char *space = " \n";

(void)ac;


	while (1)
	{
	printf("%s", prompt);
	nchars_type = getline(&sentptr, &n, stdin);

		if (nchars_type == -1)
		{
		printf("Bye Bye shell..\n");
	return (-1);
	}

	sentptr_copy = malloc(sizeof(char) * nchars_type);
		if (sentptr_copy == Null)
		{
		perror(" allocation error");
	return (-1);
		}

	printf("%s\n", sentptr);

	free(sentptr);
	}
	return (0);
}
