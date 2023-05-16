#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define CMD_LEN 70
#define PROMPT "$ "

void exit_line(char *str);
ssize_t gets_cmd(char *cmd, size_t len);
void exec_cmd(char *cmd, char *fn);

#endif
