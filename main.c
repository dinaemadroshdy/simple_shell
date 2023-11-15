#include "shell.h"

/**
 * main - Entry point
 *
 * Description: Display prompt
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0
 */

int main(int ac; char *argv)
{
char *prompt = "(hdshell) $ ";
(void)ac;
(void)argv;
char *sentptr;
size_t n = 0;
printf("%s", prompt);
getline(&sentptr, &n, stdin);
	free(sentptr);
	return (0);
}
