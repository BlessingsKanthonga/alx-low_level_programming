#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

extern char **environ;
/**
 * main - imitates functionallity of the shell
 * @ac: number of arguments
 * @av: list of arguments (only 1 for this shell)
 * Return: 0 on success, 1 if not right amount of arguments
 */

int main(int ac, char **av)
{
	size_t size = 0;
	char *input, *argv[2] = {NULL, NULL};
	pid_t pid;
	int status;

	if (ac != 1)
	{
		printf("Usage: %s argument\n", av[0]);
		return (1);
	}

	while (1)
	{
		printf("#cisfun$ ");
		getline(&input, &size, stdin);
		pid = fork();

		if (pid == -1)
			perror(av[0]);
		else if (pid == 0)
		{
			if (input[size - 1] == '\n')
			{
				input[size - 1] = '\0';
				size--;
			}argv[0] = input;
			execve(input, argv, environ);
			perror(av[0]);
		}
		else
			waitpid(pid, &status, 0);
	}
	return (0);
}
