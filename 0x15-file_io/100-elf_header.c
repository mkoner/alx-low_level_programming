#include "main.h"
#include <stdio.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */
int main(int ac, char *av[])
{
	int input_fd, output_fd, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	input_fd = open(av[1], O_RDONLY);
	if (input_fd == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);

