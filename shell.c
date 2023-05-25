#include "shell.h"
/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: loop
 *
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	signal(SIGINT, ctrl);
	gets_prompt();
	return (0);
}
