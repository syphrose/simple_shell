#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#define CMD_LEN 70
#define PROMPT "$ "
#define ARGS 10
extern char **environ;

void exit_line(char *str);
ssize_t gets_cmd(char *cmd, size_t len);
void exec_cmd(char *cmd, char *fn);
size_t _strlen(const char *str);
size_t _strcspn(const char *str1, const char *str2);
int _strcmp(const char *string1, const char *string2);
void exec_token(char *cmd, char *fn);
char *handle_path(char *cmd);
char *_strncpy(char *dest, const char *src, int sz);
void errMsg(const char *msg);

#endif
