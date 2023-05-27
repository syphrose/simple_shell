#ifndef SHELL_H
#define SHELL_H
i
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <errno.h>


#define USER_GETLINE 0
#define USER_STRTOK 0

#define HISTORY_FILE     ".simple_shell_history"
#define HIST_MAX          4096

#define READ_BUFFER_SIZE 1024
#define GET_BUFFER_SIZE 1024
#define BUFFER_FLUSH -1

#define CMD_NORM          0
#define CMD_OR            1
#define CMD_AND           2
#define CMD_CHAIN         3

#define CONVERTS_LOWERCASE
#define CONVERTS_UNSIGNED   2

extern char **environ;

/**
 * struct getstr - gets string
 * @num:number
 * @str:string
 * @nxt:next node
 */

typedef struct getstr
{
	int num;
	char *str;
	struct getstr *nxt;
} list_t;

/**
 * struct getdata - gets data
 * @ag:arguments
 * @av:vector
 * @track:path
 * @ac:arg counts
 * @countsLine:line count
 * @num_error:checks for errors
 * @fg_countsLine: flag counts
 * @fn:file name
 * @env:environment
 * @hist:history
 * @alias:alias of node
 * @environ:copy of environ
 * @new_env:new environ
 * @st:status
 * @cmd_buffer:points to cmd
 * @cmd_type:type of command
 * @gets_fd:file description
 * @histNum:number of history
 */

typedef struct getdata
{
	char *ag;
	char **av;
	char *track;
	int ac;
	unsigned int countsLine;
	int num_error;
	int fg_countsLine;
	char *fn;
	list_t *env;
	list_t *hist;
	list_t *alias;
	char **environ;
	int new_env;
	int st;
	char **cmd_buffer;
	int cmd_type;
	int gets_fd;
	int histNum;
} data_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}
/**
 * struct builtin - conatainer
 * @type:cmd flag
 * @func:functions
 */

typedef struct builtin
{
	char *type;
	int (*func)(data_t *);
} builtin_tb;



/* PROTOTYPES */

int _hsh(data_t *data, char **argv);
int finds_builtin(data_t *data);
void find_cmd(data_t *data);
void fork_cmd(data_t *data);
int prints_cmd(data_t *data, char *track);
char *char_dups(char *trackstr, int strt, int stp);
char *finds_track(data_t *data, char *trackstr, char *cmd);
void eputs_(char *str);
int eput_char(char c);
int gets_fd(char *str, int fd);
int get_fd(char c, int fd);
int str_len(char *s);
int str_cmp(char *s1, char *s2);
char *starts_with(const char *haystack, const char *needle);
char *str_cat(char *dest, char *src);
char *str_cpy(char *dest, char *src);
char *str_dup(const char *str);
void puts_(char *str);
int put_char(char c);
char *strn_cpy(char *dest, char *src, int n);
char *strn_cat(char *dest, char *src, int n);
char *str_chr(char *str, char c);
char **str_tow(char *str, char *d);
char **str_tow2(char *str, char d);
char *mem_set(char *str, char m, unsigned int x);
void ffree(char **pp);
void *realloc_(void *pt, unsigned int old, unsigned int nnew);
int bfree(void **ptr);
int interactive_mode(data_t *data);
int check_delim(char c, char *delim);
int check_alpha(int c);
int prints_atoi(char *str);
int error_atoi(char *str);
void prints_err(data_t *data, char *str);
int prints_d(int load, int fd);
char *converts_num(long int num, int bs, int fg);
void deletes_comment(char *buffer);
int exit_(data_t *data);
int get_cd(data_t *data);
int _help(data_t *data);
int _hist(data_t *data);
int _Alias(data_t *data);
ssize_t gets_load(data_t *data);
int get_line(data_t *data, char **p, size_t *lenn);
void handle_sig(__attribute__((unused)) int sigNal);
void clear_data(data_t *data);
void set_data(data_t *data, char **av);
ssize_t gets_buffer(data_t *data, char *buffer, size_t *i);
void release_data(data_t *data, int a);
ssize_t load_buffer(data_t *data, char **buffer, size_t *len);
char *get_env(data_t *data, const char *nm);
int _env(data_t *data);
int my_setenv(data_t *data);
int my_unsetenv(data_t *data);
int occupy_env(data_t *data);
char **reads_environ(data_t *data);
int unset_env(data_t *data, char *vr);
int set_env(data_t *data, char *vr, char *value);
char *gets_hist(data_t *data);
int prints_hist(data_t *data);
int reads_hist(data_t *data);
int const_hist(data_t *data, char *buffer, int lineNum);
int renum_hist(data_t *data);
list_t *add_nd(list_t **hd, const char *str, int num);
list_t *adds_nd(list_t **hd, const char *str, int num);
size_t prints_str(const list_t *h);
int rm_nd_ind(list_t **hd, unsigned int ind);
void clear_ls(list_t **hdptr);
size_t ls_len(const list_t *h);
char **lists_str(list_t *hd);
size_t prints_ls(const list_t *h);
list_t *nd_start(list_t *nd, char *pref, char c);
ssize_t gets_nd_ind(list_t *hd, list_t *nd);
int prints_chain(data_t *data, char *buffer, size_t *ptr);
int return_alias(data_t *data);
int return_vars(data_t *data);
int new_str(char **old, char *nnew);
void confirm_chain(data_t *data, char *buffer, size_t *ptr, size_t i,
		size_t len);


#endif
