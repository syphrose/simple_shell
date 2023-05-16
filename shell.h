#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define MAX_ARGS 10

void show_prompt(void);
char** get_input();
void exec_command(char **args);

#endif
