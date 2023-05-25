#include "shell.h"

/**
 * gets_prompt - gets the prompt
 *
 */

void gets_prompt(void)
{
	for (;;)
	{
		char *txt = NULL;
		char **environ;
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
				if (!(_strcmpdir(*environ, "USER")) ||
						!(_strcmpdir(*environ, "LANG")) ||
						!(_strcmpdir(*environ, "SESSION")) ||
						!(_strcmpdir(*environ, "COMPIZ_CONFIG_PROFILE")) ||
						!(_strcmpdir(*environ, "SHLV")) ||
						!(_strcmpdir(*environ, "HOME")) ||
						!(_strcmpdir(*environ, "C_IS")) ||
						!(_strcmpdir(*environ, "DESKTOP_SESSION")) ||
						!(_strcmpdir(*environ, "LOGNAME")) ||
						!(_strcmpdir(*environ, "TERM")) ||
						!(_strcmpdir(*environ, "PATH")))
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
