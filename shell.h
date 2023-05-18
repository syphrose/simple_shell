#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>

#define MAX_ARGUMENTS 40
#define CMD_LEN 150
#define PROMPT "$ "
extern char **environ;

void exec_cmd(const char *cmd, char *const args[]);
int authorised_cmd(const char *cmd);
char *gets_path(const char *cmd, const char *track);
void exit_line(char *str);
void handles_environ(char *const args[]);
ssize_t gets_cmd(char *cmd);
void cmd_parse(const char *cmdline, char *cmd, char *args[]);
int cmd_exists(const char *cmd, const char *dir);
char *search_cmd(const char *cmd, const char *track);
int _strcmp(const char *string1, const char *string2);
void _strcpy(char *end, const char *src);
size_t _strcspn(const char *str1, const char *str2);
char *_strdup(const char *str);
size_t _strlen(const char *str);
void handlers_environ(char *const args[]);
int cmd_exists(const char *cmd, const char *dir);

#endif
