#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

void gets_prompt(void);
void exec_cmd(char **cmd);
int str_cmp(char *str1, char *str2);
int str_len(const char *string);
char *strconcat(char *dest, char *src);
void add(char *string);
int putchar_(char c);
int find_slash(char *cmd);
void ctrl(int sig);
char *search_cmd(char *cmd);
char **capture_str(char *param);
int contrast_ext(char *str1, char *str2);
int contrast_Env(char *str1, char *str2);




#endif
