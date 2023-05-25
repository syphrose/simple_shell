#include "shell.h"

/**
 * gets_prompt - gets the prompt
 *
 */

void gets_prompt(void)
{
	for (;;)
	{
		char *txt = NULL, **environ;
		pid_t child_pid;
		int st, len_buffer;
		size_t buffer_size = 0;

		add("$ ");
		len_buffer = getline(&txt, &buffer_size, stdin);
		if (len_buffer < 0)
			exit(98);
		if (contrast_ext(txt, "exit") == 0)
			exit(0);
		if (contrast_Env(txt, "env") == 0)
		{
			while (*environ != NULL)
			{
				if (!(str_cmp(*environ, "USER")) ||
						!(str_cmp(*environ, "LANG")) ||
						!(str_cmp(*environ, "SESSION")) ||
						!(str_cmp(*environ, "COMPIZ_CONFIG_PROFILE")) ||
						!(str_cmp(*environ, "SHLV")) ||
						!(str_cmp(*environ, "HOME")) ||
						!(str_cmp(*environ, "C_IS")) ||
						!(str_cmp(*environ, "DESKTOP_SESSION")) ||
						!(str_cmp(*environ, "LOGNAME")) ||
						!(str_cmp(*environ, "TERM")) ||
						!(str_cmp(*environ, "PATH")))
				{
					add(*environ), add("\n"); }
				environ++; }}
		child_pid = fork();
		if (child_pid < 0)
			perror("Error");
		if (child_pid == 0)
			capture_str(txt);
		else
			wait(&st);
	}}
