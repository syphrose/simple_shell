#include "shell.h"
/**
 * get_cd - changes the working directory
 * @data: struct housing args
 * Return: 0
 *
 */
int get_cd(data_t *data)
{
	char *str, *dir, buff[1024];
	int chdir_ret;

	str = getcwd(buff, 1024);

	if (!str)
		puts_("TODO: >>getcwd failure errmsg here<<\n");
	if (!data->av[1])
	{
		dir = get_env(data, "HOME=");
		if (!dir)
			chdir_ret = chdir((dir = get_env(data, "PWD=")) ? dir : "/");
		else
			chdir_ret = chdir(dir);
	}
	else if (str_cmp(data->av[1], "-") == 0)
	{
		if (!get_env(data, "OLDPWD="))
		{
			puts_(str);
			put_char('\n');
			return (1);
		}
		puts_(get_env(data, "OLDPWD=")), put_char('\n');
		chdir_ret = chdir((dir = get_env(data, "OLDPWD=")) ? dir : "/");
	}
	else
		chdir_ret = chdir(data->av[1]);
	if (chdir_ret < 0)
	{
		prints_err(data, "cannot cd to ");
		eputs_(data->av[1]), eput_char('\n');
	}
	else
	{
		set_env(data, "OLDPWD", get_env(data, "PWD="));
		set_env(data, "PWD", getcwd(buff, 1024));
	}
	return (0);

}
