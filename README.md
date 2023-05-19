                                         C - Simple Shell
                                         Group project
 DESCRIPTION:
This repo is all about stimulating the basic Unix Shell using commands from respective files.
The most predominately used calls are malloc,exit,execve,wait,write,read,getline,perror,waitpid,strtok,fork,isatty and open.
The project is a shell interface written in C language that basically gives the user a prompt, in our instance "$", which when a command is accepted, it executes the users input in a separate process called the child process.
 
 GENERAL OBJECTIVES:
 * vi, vim, emacs are the allowed editors
 * compile all the files on Ubuntu 14.04 LTS
 * the programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 * all the files should end with a new line
 * its mandatory to have a README.md file at the root of the folder of the project
 * the code should use the betty style which will be checked using betty-style.pl and betty-doc.pl
 * the shell should not have memory leaks
 * dont call out more than 5 functions per file
 * all the header files should be include guarded ie *#include "shell.h"*

ALLOWED FUNCTIONS:
 ~ access (man 2 access)
 ~ chdir (man 2 chdir)
 ~ close (man 2 close)
 ~ closedir (man 3 closedir)
 ~ execve (man 2 execve)
 ~ exit (man 3 exit)
 ~ _exit (man 2 exit)
 ~ fflush (man 3 fflush)
 ~ fork (man 2 fork)
 ~ free (man 3 free)
 ~ getcwd (man 3 cwd)
 ~ getline (man 3 getline)
 ~ getpid (man 2 getpid)
 ~ isatty (man 3 isatty)
 ~ kill (man 2 kill)
 ~ malloc (man 3 malloc)
 ~ open (man 2 open)
 ~ opendir (man 3 opendir)
 ~ perror (man 3 perror)
 ~ read (man 2 read)
 ~ readdir (man 3 readdir)
 ~ signal (man 2 signal)
 ~ stat (__xstat) (man 2 stat)
 ~ lstat (__lxstat) (man 2 lstat)
 ~ fstat (__fxstat) (man 2 fstat)
 ~ strtok (man 3 strtok)
 ~ wait (man 2 wait)
 ~ waitpid (man 2 waitpid)
 ~ wait3 (man 2 wait3)
 ~ wait4 (man 2 wait4)
 ~ write (man 2 write)

 PROCESS DESCRITION

a.First, the parent process is created when the user run the program.
b.Then, the isatty() function using STDIN_FILENO file descriptor -fd- is called to tests if there is an open file descriptor referring to a terminal. If isatty() returns 1, the prompt is showed using write() with STDOUT_FILENO as fd and waits for an input user command line.
c.When the user types a command, getline() function reads an entire line from the stream and strtok() function breaks the inputted command into a sequence of non-empty tokens.
d.Next, it creates a separate child process using fork() that works on the inputted command. Unless otherwise is specified, the parent process waits for the child to exit before continuing.
e.After the token command, execve() function brings and executes it, then it frees all the allocated memory with free().
f.Finally, the program returns to main process: prints the prompt, and waits for another user input.
 
 THE START;

To run this shell with its respective commands, it's necessary to clone this reposotory in your terminal ie;
 * HTTPS:
 git clone https://github.com/syphrose/simple_shell.git
 * SSH:
 git clone git@github.com:syphrose/simple_shell.git

 COMPILING, DEBUGGING and RUNNING:

 * All of your and our programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 * To compile the functions use:
gcc -Wall -Wextra -Werror -pedantic -Wno-format -g *.c -o main
 * To debug the shell use:
valgrind --leak-check=full ./main
 * or run to try out the shell using:
man ./man_1_simple_shell

SUPPORT;
Simply by giving a star if you get whats going on here'

BUGS;
The project has no known bugs
